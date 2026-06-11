<template>
  <section class="panel-53849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53849");
const base = ref(53849);
const total = computed(() => base.value * 2);

function incrementar53849() {
  base.value++;
}
</script>
