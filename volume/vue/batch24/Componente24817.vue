<template>
  <section class="panel-24817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24817");
const base = ref(24817);
const total = computed(() => base.value * 2);

function incrementar24817() {
  base.value++;
}
</script>
