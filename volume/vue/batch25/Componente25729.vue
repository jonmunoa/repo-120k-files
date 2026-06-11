<template>
  <section class="panel-25729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25729");
const base = ref(25729);
const total = computed(() => base.value * 2);

function incrementar25729() {
  base.value++;
}
</script>
