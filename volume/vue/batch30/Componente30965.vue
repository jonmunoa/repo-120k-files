<template>
  <section class="panel-30965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30965");
const base = ref(30965);
const total = computed(() => base.value * 2);

function incrementar30965() {
  base.value++;
}
</script>
