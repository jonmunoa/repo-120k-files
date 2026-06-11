<template>
  <section class="panel-29641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29641");
const base = ref(29641);
const total = computed(() => base.value * 2);

function incrementar29641() {
  base.value++;
}
</script>
