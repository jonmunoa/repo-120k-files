<template>
  <section class="panel-34021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34021");
const base = ref(34021);
const total = computed(() => base.value * 2);

function incrementar34021() {
  base.value++;
}
</script>
