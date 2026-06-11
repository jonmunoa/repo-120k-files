<template>
  <section class="panel-30577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30577");
const base = ref(30577);
const total = computed(() => base.value * 2);

function incrementar30577() {
  base.value++;
}
</script>
