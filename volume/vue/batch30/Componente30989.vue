<template>
  <section class="panel-30989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30989");
const base = ref(30989);
const total = computed(() => base.value * 2);

function incrementar30989() {
  base.value++;
}
</script>
