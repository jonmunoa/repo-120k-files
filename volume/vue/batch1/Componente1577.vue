<template>
  <section class="panel-1577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1577");
const base = ref(1577);
const total = computed(() => base.value * 2);

function incrementar1577() {
  base.value++;
}
</script>
