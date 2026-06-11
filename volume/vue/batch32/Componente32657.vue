<template>
  <section class="panel-32657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32657");
const base = ref(32657);
const total = computed(() => base.value * 2);

function incrementar32657() {
  base.value++;
}
</script>
