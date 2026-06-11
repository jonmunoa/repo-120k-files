<template>
  <section class="panel-34129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34129");
const base = ref(34129);
const total = computed(() => base.value * 2);

function incrementar34129() {
  base.value++;
}
</script>
