<template>
  <section class="panel-23145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23145");
const base = ref(23145);
const total = computed(() => base.value * 2);

function incrementar23145() {
  base.value++;
}
</script>
