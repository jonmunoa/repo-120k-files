<template>
  <section class="panel-49681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49681");
const base = ref(49681);
const total = computed(() => base.value * 2);

function incrementar49681() {
  base.value++;
}
</script>
