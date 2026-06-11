<template>
  <section class="panel-44065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44065");
const base = ref(44065);
const total = computed(() => base.value * 2);

function incrementar44065() {
  base.value++;
}
</script>
