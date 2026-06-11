<template>
  <section class="panel-23897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23897");
const base = ref(23897);
const total = computed(() => base.value * 2);

function incrementar23897() {
  base.value++;
}
</script>
