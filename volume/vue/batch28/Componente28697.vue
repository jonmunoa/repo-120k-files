<template>
  <section class="panel-28697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28697");
const base = ref(28697);
const total = computed(() => base.value * 2);

function incrementar28697() {
  base.value++;
}
</script>
