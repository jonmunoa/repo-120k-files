<template>
  <section class="panel-55081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55081");
const base = ref(55081);
const total = computed(() => base.value * 2);

function incrementar55081() {
  base.value++;
}
</script>
