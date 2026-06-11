<template>
  <section class="panel-27733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27733");
const base = ref(27733);
const total = computed(() => base.value * 2);

function incrementar27733() {
  base.value++;
}
</script>
