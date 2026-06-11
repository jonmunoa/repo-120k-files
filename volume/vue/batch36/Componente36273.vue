<template>
  <section class="panel-36273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36273");
const base = ref(36273);
const total = computed(() => base.value * 2);

function incrementar36273() {
  base.value++;
}
</script>
