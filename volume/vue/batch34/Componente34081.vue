<template>
  <section class="panel-34081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34081");
const base = ref(34081);
const total = computed(() => base.value * 2);

function incrementar34081() {
  base.value++;
}
</script>
