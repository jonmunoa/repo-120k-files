<template>
  <section class="panel-10733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10733");
const base = ref(10733);
const total = computed(() => base.value * 2);

function incrementar10733() {
  base.value++;
}
</script>
