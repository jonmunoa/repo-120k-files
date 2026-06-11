<template>
  <section class="panel-47701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47701");
const base = ref(47701);
const total = computed(() => base.value * 2);

function incrementar47701() {
  base.value++;
}
</script>
