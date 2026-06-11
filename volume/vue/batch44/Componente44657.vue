<template>
  <section class="panel-44657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44657");
const base = ref(44657);
const total = computed(() => base.value * 2);

function incrementar44657() {
  base.value++;
}
</script>
