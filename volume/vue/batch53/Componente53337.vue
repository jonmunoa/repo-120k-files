<template>
  <section class="panel-53337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53337");
const base = ref(53337);
const total = computed(() => base.value * 2);

function incrementar53337() {
  base.value++;
}
</script>
