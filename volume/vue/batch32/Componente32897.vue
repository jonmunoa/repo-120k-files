<template>
  <section class="panel-32897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32897");
const base = ref(32897);
const total = computed(() => base.value * 2);

function incrementar32897() {
  base.value++;
}
</script>
