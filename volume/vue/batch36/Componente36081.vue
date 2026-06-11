<template>
  <section class="panel-36081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36081");
const base = ref(36081);
const total = computed(() => base.value * 2);

function incrementar36081() {
  base.value++;
}
</script>
