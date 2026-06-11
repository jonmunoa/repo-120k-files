<template>
  <section class="panel-47473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47473");
const base = ref(47473);
const total = computed(() => base.value * 2);

function incrementar47473() {
  base.value++;
}
</script>
