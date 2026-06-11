<template>
  <section class="panel-5897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5897");
const base = ref(5897);
const total = computed(() => base.value * 2);

function incrementar5897() {
  base.value++;
}
</script>
