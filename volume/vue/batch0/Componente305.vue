<template>
  <section class="panel-305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 305");
const base = ref(305);
const total = computed(() => base.value * 2);

function incrementar305() {
  base.value++;
}
</script>
