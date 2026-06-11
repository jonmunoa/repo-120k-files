<template>
  <section class="panel-56657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56657");
const base = ref(56657);
const total = computed(() => base.value * 2);

function incrementar56657() {
  base.value++;
}
</script>
