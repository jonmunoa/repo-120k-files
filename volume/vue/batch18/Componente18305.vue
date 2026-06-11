<template>
  <section class="panel-18305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18305");
const base = ref(18305);
const total = computed(() => base.value * 2);

function incrementar18305() {
  base.value++;
}
</script>
