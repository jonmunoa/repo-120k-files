<template>
  <section class="panel-41129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41129");
const base = ref(41129);
const total = computed(() => base.value * 2);

function incrementar41129() {
  base.value++;
}
</script>
