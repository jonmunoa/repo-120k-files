<template>
  <section class="panel-30925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30925");
const base = ref(30925);
const total = computed(() => base.value * 2);

function incrementar30925() {
  base.value++;
}
</script>
