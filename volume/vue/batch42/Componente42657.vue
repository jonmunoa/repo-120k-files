<template>
  <section class="panel-42657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42657");
const base = ref(42657);
const total = computed(() => base.value * 2);

function incrementar42657() {
  base.value++;
}
</script>
