<template>
  <section class="panel-28153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28153");
const base = ref(28153);
const total = computed(() => base.value * 2);

function incrementar28153() {
  base.value++;
}
</script>
