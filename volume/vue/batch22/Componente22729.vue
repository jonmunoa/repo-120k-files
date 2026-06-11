<template>
  <section class="panel-22729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22729");
const base = ref(22729);
const total = computed(() => base.value * 2);

function incrementar22729() {
  base.value++;
}
</script>
