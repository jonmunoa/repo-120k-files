<template>
  <section class="panel-37005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37005");
const base = ref(37005);
const total = computed(() => base.value * 2);

function incrementar37005() {
  base.value++;
}
</script>
