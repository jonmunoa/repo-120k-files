<template>
  <section class="panel-25429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25429");
const base = ref(25429);
const total = computed(() => base.value * 2);

function incrementar25429() {
  base.value++;
}
</script>
