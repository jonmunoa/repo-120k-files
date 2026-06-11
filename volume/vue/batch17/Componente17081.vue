<template>
  <section class="panel-17081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17081");
const base = ref(17081);
const total = computed(() => base.value * 2);

function incrementar17081() {
  base.value++;
}
</script>
