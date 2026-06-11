<template>
  <section class="panel-18733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18733");
const base = ref(18733);
const total = computed(() => base.value * 2);

function incrementar18733() {
  base.value++;
}
</script>
