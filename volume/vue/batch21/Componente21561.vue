<template>
  <section class="panel-21561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21561");
const base = ref(21561);
const total = computed(() => base.value * 2);

function incrementar21561() {
  base.value++;
}
</script>
