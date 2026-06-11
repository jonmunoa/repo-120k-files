<template>
  <section class="panel-43101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43101");
const base = ref(43101);
const total = computed(() => base.value * 2);

function incrementar43101() {
  base.value++;
}
</script>
