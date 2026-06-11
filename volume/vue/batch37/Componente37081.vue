<template>
  <section class="panel-37081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37081");
const base = ref(37081);
const total = computed(() => base.value * 2);

function incrementar37081() {
  base.value++;
}
</script>
