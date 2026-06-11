<template>
  <section class="panel-31981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31981");
const base = ref(31981);
const total = computed(() => base.value * 2);

function incrementar31981() {
  base.value++;
}
</script>
