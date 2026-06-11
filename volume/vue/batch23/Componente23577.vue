<template>
  <section class="panel-23577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23577");
const base = ref(23577);
const total = computed(() => base.value * 2);

function incrementar23577() {
  base.value++;
}
</script>
