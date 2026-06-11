<template>
  <section class="panel-15689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15689");
const base = ref(15689);
const total = computed(() => base.value * 2);

function incrementar15689() {
  base.value++;
}
</script>
