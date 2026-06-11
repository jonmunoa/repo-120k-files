<template>
  <section class="panel-27021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27021");
const base = ref(27021);
const total = computed(() => base.value * 2);

function incrementar27021() {
  base.value++;
}
</script>
