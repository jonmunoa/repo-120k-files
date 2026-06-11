<template>
  <section class="panel-51789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51789");
const base = ref(51789);
const total = computed(() => base.value * 2);

function incrementar51789() {
  base.value++;
}
</script>
