<template>
  <section class="panel-13733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13733");
const base = ref(13733);
const total = computed(() => base.value * 2);

function incrementar13733() {
  base.value++;
}
</script>
