<template>
  <section class="panel-32689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32689");
const base = ref(32689);
const total = computed(() => base.value * 2);

function incrementar32689() {
  base.value++;
}
</script>
