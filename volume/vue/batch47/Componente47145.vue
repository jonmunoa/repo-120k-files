<template>
  <section class="panel-47145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47145");
const base = ref(47145);
const total = computed(() => base.value * 2);

function incrementar47145() {
  base.value++;
}
</script>
