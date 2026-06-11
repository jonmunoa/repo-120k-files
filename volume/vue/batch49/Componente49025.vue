<template>
  <section class="panel-49025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49025");
const base = ref(49025);
const total = computed(() => base.value * 2);

function incrementar49025() {
  base.value++;
}
</script>
