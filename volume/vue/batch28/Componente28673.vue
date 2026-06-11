<template>
  <section class="panel-28673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28673");
const base = ref(28673);
const total = computed(() => base.value * 2);

function incrementar28673() {
  base.value++;
}
</script>
