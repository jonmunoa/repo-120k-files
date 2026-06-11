<template>
  <section class="panel-41689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41689");
const base = ref(41689);
const total = computed(() => base.value * 2);

function incrementar41689() {
  base.value++;
}
</script>
