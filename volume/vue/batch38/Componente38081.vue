<template>
  <section class="panel-38081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38081");
const base = ref(38081);
const total = computed(() => base.value * 2);

function incrementar38081() {
  base.value++;
}
</script>
