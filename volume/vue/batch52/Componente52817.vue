<template>
  <section class="panel-52817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52817");
const base = ref(52817);
const total = computed(() => base.value * 2);

function incrementar52817() {
  base.value++;
}
</script>
