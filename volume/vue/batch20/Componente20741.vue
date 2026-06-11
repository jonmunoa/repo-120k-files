<template>
  <section class="panel-20741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20741");
const base = ref(20741);
const total = computed(() => base.value * 2);

function incrementar20741() {
  base.value++;
}
</script>
