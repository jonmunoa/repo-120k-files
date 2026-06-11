<template>
  <section class="panel-42273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42273");
const base = ref(42273);
const total = computed(() => base.value * 2);

function incrementar42273() {
  base.value++;
}
</script>
