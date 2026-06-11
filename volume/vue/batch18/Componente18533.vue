<template>
  <section class="panel-18533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18533");
const base = ref(18533);
const total = computed(() => base.value * 2);

function incrementar18533() {
  base.value++;
}
</script>
