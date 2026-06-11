<template>
  <section class="panel-28557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28557");
const base = ref(28557);
const total = computed(() => base.value * 2);

function incrementar28557() {
  base.value++;
}
</script>
