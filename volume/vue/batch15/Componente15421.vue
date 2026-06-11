<template>
  <section class="panel-15421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15421");
const base = ref(15421);
const total = computed(() => base.value * 2);

function incrementar15421() {
  base.value++;
}
</script>
