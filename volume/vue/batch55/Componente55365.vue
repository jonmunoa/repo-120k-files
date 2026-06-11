<template>
  <section class="panel-55365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55365");
const base = ref(55365);
const total = computed(() => base.value * 2);

function incrementar55365() {
  base.value++;
}
</script>
