<template>
  <section class="panel-33881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33881");
const base = ref(33881);
const total = computed(() => base.value * 2);

function incrementar33881() {
  base.value++;
}
</script>
