<template>
  <section class="panel-43501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43501");
const base = ref(43501);
const total = computed(() => base.value * 2);

function incrementar43501() {
  base.value++;
}
</script>
