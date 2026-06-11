<template>
  <section class="panel-50989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50989");
const base = ref(50989);
const total = computed(() => base.value * 2);

function incrementar50989() {
  base.value++;
}
</script>
