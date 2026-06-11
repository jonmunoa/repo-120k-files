<template>
  <section class="panel-49305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49305");
const base = ref(49305);
const total = computed(() => base.value * 2);

function incrementar49305() {
  base.value++;
}
</script>
