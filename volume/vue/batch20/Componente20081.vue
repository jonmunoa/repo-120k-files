<template>
  <section class="panel-20081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20081");
const base = ref(20081);
const total = computed(() => base.value * 2);

function incrementar20081() {
  base.value++;
}
</script>
