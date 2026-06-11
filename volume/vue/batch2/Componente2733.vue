<template>
  <section class="panel-2733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2733");
const base = ref(2733);
const total = computed(() => base.value * 2);

function incrementar2733() {
  base.value++;
}
</script>
