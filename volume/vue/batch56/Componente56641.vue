<template>
  <section class="panel-56641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56641");
const base = ref(56641);
const total = computed(() => base.value * 2);

function incrementar56641() {
  base.value++;
}
</script>
