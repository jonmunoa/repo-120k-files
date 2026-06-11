<template>
  <section class="panel-52185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52185");
const base = ref(52185);
const total = computed(() => base.value * 2);

function incrementar52185() {
  base.value++;
}
</script>
