<template>
  <section class="panel-32677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32677");
const base = ref(32677);
const total = computed(() => base.value * 2);

function incrementar32677() {
  base.value++;
}
</script>
