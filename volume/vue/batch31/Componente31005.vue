<template>
  <section class="panel-31005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31005");
const base = ref(31005);
const total = computed(() => base.value * 2);

function incrementar31005() {
  base.value++;
}
</script>
