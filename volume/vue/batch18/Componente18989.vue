<template>
  <section class="panel-18989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18989");
const base = ref(18989);
const total = computed(() => base.value * 2);

function incrementar18989() {
  base.value++;
}
</script>
