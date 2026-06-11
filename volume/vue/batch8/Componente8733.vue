<template>
  <section class="panel-8733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8733");
const base = ref(8733);
const total = computed(() => base.value * 2);

function incrementar8733() {
  base.value++;
}
</script>
