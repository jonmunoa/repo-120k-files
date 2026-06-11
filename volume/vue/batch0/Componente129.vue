<template>
  <section class="panel-129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 129");
const base = ref(129);
const total = computed(() => base.value * 2);

function incrementar129() {
  base.value++;
}
</script>
