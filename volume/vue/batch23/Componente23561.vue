<template>
  <section class="panel-23561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23561");
const base = ref(23561);
const total = computed(() => base.value * 2);

function incrementar23561() {
  base.value++;
}
</script>
