<template>
  <section class="panel-48025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48025");
const base = ref(48025);
const total = computed(() => base.value * 2);

function incrementar48025() {
  base.value++;
}
</script>
