<template>
  <section class="panel-39501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39501");
const base = ref(39501);
const total = computed(() => base.value * 2);

function incrementar39501() {
  base.value++;
}
</script>
