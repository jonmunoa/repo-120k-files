<template>
  <section class="panel-14065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14065");
const base = ref(14065);
const total = computed(() => base.value * 2);

function incrementar14065() {
  base.value++;
}
</script>
