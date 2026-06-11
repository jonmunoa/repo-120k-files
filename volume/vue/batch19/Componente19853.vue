<template>
  <section class="panel-19853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19853");
const base = ref(19853);
const total = computed(() => base.value * 2);

function incrementar19853() {
  base.value++;
}
</script>
