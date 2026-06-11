<template>
  <section class="panel-38313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38313");
const base = ref(38313);
const total = computed(() => base.value * 2);

function incrementar38313() {
  base.value++;
}
</script>
