<template>
  <section class="panel-43377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43377");
const base = ref(43377);
const total = computed(() => base.value * 2);

function incrementar43377() {
  base.value++;
}
</script>
