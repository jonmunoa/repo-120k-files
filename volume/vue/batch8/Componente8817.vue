<template>
  <section class="panel-8817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8817");
const base = ref(8817);
const total = computed(() => base.value * 2);

function incrementar8817() {
  base.value++;
}
</script>
