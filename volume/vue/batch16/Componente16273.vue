<template>
  <section class="panel-16273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16273");
const base = ref(16273);
const total = computed(() => base.value * 2);

function incrementar16273() {
  base.value++;
}
</script>
