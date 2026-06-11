<template>
  <section class="panel-34989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34989");
const base = ref(34989);
const total = computed(() => base.value * 2);

function incrementar34989() {
  base.value++;
}
</script>
