<template>
  <section class="panel-45557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45557");
const base = ref(45557);
const total = computed(() => base.value * 2);

function incrementar45557() {
  base.value++;
}
</script>
