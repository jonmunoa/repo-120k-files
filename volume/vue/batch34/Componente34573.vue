<template>
  <section class="panel-34573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34573");
const base = ref(34573);
const total = computed(() => base.value * 2);

function incrementar34573() {
  base.value++;
}
</script>
