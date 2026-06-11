<template>
  <section class="panel-35473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35473");
const base = ref(35473);
const total = computed(() => base.value * 2);

function incrementar35473() {
  base.value++;
}
</script>
