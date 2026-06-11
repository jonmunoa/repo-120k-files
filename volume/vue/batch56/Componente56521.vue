<template>
  <section class="panel-56521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56521");
const base = ref(56521);
const total = computed(() => base.value * 2);

function incrementar56521() {
  base.value++;
}
</script>
