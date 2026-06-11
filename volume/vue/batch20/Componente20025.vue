<template>
  <section class="panel-20025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20025");
const base = ref(20025);
const total = computed(() => base.value * 2);

function incrementar20025() {
  base.value++;
}
</script>
