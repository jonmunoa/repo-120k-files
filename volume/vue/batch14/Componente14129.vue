<template>
  <section class="panel-14129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14129");
const base = ref(14129);
const total = computed(() => base.value * 2);

function incrementar14129() {
  base.value++;
}
</script>
