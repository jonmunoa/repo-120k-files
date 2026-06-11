<template>
  <section class="panel-51701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51701");
const base = ref(51701);
const total = computed(() => base.value * 2);

function incrementar51701() {
  base.value++;
}
</script>
