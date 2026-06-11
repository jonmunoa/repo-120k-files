<template>
  <section class="panel-19025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19025");
const base = ref(19025);
const total = computed(() => base.value * 2);

function incrementar19025() {
  base.value++;
}
</script>
