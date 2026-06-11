<template>
  <section class="panel-54521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54521");
const base = ref(54521);
const total = computed(() => base.value * 2);

function incrementar54521() {
  base.value++;
}
</script>
