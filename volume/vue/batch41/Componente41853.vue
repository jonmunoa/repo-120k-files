<template>
  <section class="panel-41853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41853");
const base = ref(41853);
const total = computed(() => base.value * 2);

function incrementar41853() {
  base.value++;
}
</script>
