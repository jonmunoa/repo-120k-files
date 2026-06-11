<template>
  <section class="panel-9733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9733");
const base = ref(9733);
const total = computed(() => base.value * 2);

function incrementar9733() {
  base.value++;
}
</script>
