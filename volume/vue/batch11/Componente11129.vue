<template>
  <section class="panel-11129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11129");
const base = ref(11129);
const total = computed(() => base.value * 2);

function incrementar11129() {
  base.value++;
}
</script>
