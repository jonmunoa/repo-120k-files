<template>
  <section class="panel-29657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29657");
const base = ref(29657);
const total = computed(() => base.value * 2);

function incrementar29657() {
  base.value++;
}
</script>
