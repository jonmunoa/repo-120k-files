<template>
  <section class="panel-21881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21881");
const base = ref(21881);
const total = computed(() => base.value * 2);

function incrementar21881() {
  base.value++;
}
</script>
