<template>
  <section class="panel-33733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33733");
const base = ref(33733);
const total = computed(() => base.value * 2);

function incrementar33733() {
  base.value++;
}
</script>
