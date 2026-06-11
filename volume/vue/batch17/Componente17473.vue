<template>
  <section class="panel-17473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17473");
const base = ref(17473);
const total = computed(() => base.value * 2);

function incrementar17473() {
  base.value++;
}
</script>
