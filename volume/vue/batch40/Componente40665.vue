<template>
  <section class="panel-40665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40665");
const base = ref(40665);
const total = computed(() => base.value * 2);

function incrementar40665() {
  base.value++;
}
</script>
