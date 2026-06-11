<template>
  <section class="panel-39577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39577");
const base = ref(39577);
const total = computed(() => base.value * 2);

function incrementar39577() {
  base.value++;
}
</script>
