<template>
  <section class="panel-34733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34733");
const base = ref(34733);
const total = computed(() => base.value * 2);

function incrementar34733() {
  base.value++;
}
</script>
