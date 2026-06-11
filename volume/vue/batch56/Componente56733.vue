<template>
  <section class="panel-56733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56733");
const base = ref(56733);
const total = computed(() => base.value * 2);

function incrementar56733() {
  base.value++;
}
</script>
