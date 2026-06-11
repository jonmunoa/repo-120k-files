<template>
  <section class="panel-4701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4701");
const base = ref(4701);
const total = computed(() => base.value * 2);

function incrementar4701() {
  base.value++;
}
</script>
