<template>
  <section class="panel-51421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51421");
const base = ref(51421);
const total = computed(() => base.value * 2);

function incrementar51421() {
  base.value++;
}
</script>
