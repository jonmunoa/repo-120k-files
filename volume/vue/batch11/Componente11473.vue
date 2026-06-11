<template>
  <section class="panel-11473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11473");
const base = ref(11473);
const total = computed(() => base.value * 2);

function incrementar11473() {
  base.value++;
}
</script>
