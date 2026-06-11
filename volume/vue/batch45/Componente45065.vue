<template>
  <section class="panel-45065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45065");
const base = ref(45065);
const total = computed(() => base.value * 2);

function incrementar45065() {
  base.value++;
}
</script>
