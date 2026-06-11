<template>
  <section class="panel-11309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11309");
const base = ref(11309);
const total = computed(() => base.value * 2);

function incrementar11309() {
  base.value++;
}
</script>
