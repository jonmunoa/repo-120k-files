<template>
  <section class="panel-36641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36641");
const base = ref(36641);
const total = computed(() => base.value * 2);

function incrementar36641() {
  base.value++;
}
</script>
