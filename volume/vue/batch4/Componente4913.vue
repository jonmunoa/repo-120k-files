<template>
  <section class="panel-4913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4913");
const base = ref(4913);
const total = computed(() => base.value * 2);

function incrementar4913() {
  base.value++;
}
</script>
