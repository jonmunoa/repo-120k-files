<template>
  <section class="panel-28481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28481");
const base = ref(28481);
const total = computed(() => base.value * 2);

function incrementar28481() {
  base.value++;
}
</script>
