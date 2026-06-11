<template>
  <section class="panel-14989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14989");
const base = ref(14989);
const total = computed(() => base.value * 2);

function incrementar14989() {
  base.value++;
}
</script>
