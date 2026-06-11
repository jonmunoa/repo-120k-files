<template>
  <section class="panel-18441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18441");
const base = ref(18441);
const total = computed(() => base.value * 2);

function incrementar18441() {
  base.value++;
}
</script>
