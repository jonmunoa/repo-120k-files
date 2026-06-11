<template>
  <section class="panel-34545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34545");
const base = ref(34545);
const total = computed(() => base.value * 2);

function incrementar34545() {
  base.value++;
}
</script>
