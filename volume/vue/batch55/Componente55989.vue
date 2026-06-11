<template>
  <section class="panel-55989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55989");
const base = ref(55989);
const total = computed(() => base.value * 2);

function incrementar55989() {
  base.value++;
}
</script>
