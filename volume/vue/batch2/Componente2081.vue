<template>
  <section class="panel-2081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2081");
const base = ref(2081);
const total = computed(() => base.value * 2);

function incrementar2081() {
  base.value++;
}
</script>
