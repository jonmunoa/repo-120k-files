<template>
  <section class="panel-8989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8989");
const base = ref(8989);
const total = computed(() => base.value * 2);

function incrementar8989() {
  base.value++;
}
</script>
