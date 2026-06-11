<template>
  <section class="panel-56373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56373");
const base = ref(56373);
const total = computed(() => base.value * 2);

function incrementar56373() {
  base.value++;
}
</script>
