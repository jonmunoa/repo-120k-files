<template>
  <section class="panel-51897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51897");
const base = ref(51897);
const total = computed(() => base.value * 2);

function incrementar51897() {
  base.value++;
}
</script>
