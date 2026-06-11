<template>
  <section class="panel-37269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37269");
const base = ref(37269);
const total = computed(() => base.value * 2);

function incrementar37269() {
  base.value++;
}
</script>
