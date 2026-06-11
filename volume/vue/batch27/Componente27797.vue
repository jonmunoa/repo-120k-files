<template>
  <section class="panel-27797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27797");
const base = ref(27797);
const total = computed(() => base.value * 2);

function incrementar27797() {
  base.value++;
}
</script>
