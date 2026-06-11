<template>
  <section class="panel-51733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51733");
const base = ref(51733);
const total = computed(() => base.value * 2);

function incrementar51733() {
  base.value++;
}
</script>
