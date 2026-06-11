<template>
  <section class="panel-17733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17733");
const base = ref(17733);
const total = computed(() => base.value * 2);

function incrementar17733() {
  base.value++;
}
</script>
