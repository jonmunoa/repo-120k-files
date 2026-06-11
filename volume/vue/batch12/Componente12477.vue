<template>
  <section class="panel-12477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12477");
const base = ref(12477);
const total = computed(() => base.value * 2);

function incrementar12477() {
  base.value++;
}
</script>
