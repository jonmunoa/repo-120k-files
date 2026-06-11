<template>
  <section class="panel-37025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37025");
const base = ref(37025);
const total = computed(() => base.value * 2);

function incrementar37025() {
  base.value++;
}
</script>
