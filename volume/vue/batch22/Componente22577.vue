<template>
  <section class="panel-22577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22577");
const base = ref(22577);
const total = computed(() => base.value * 2);

function incrementar22577() {
  base.value++;
}
</script>
