<template>
  <section class="panel-24985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24985");
const base = ref(24985);
const total = computed(() => base.value * 2);

function incrementar24985() {
  base.value++;
}
</script>
