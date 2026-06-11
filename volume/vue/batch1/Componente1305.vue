<template>
  <section class="panel-1305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1305");
const base = ref(1305);
const total = computed(() => base.value * 2);

function incrementar1305() {
  base.value++;
}
</script>
