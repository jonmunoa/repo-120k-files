<template>
  <section class="panel-29501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29501");
const base = ref(29501);
const total = computed(() => base.value * 2);

function incrementar29501() {
  base.value++;
}
</script>
