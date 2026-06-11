<template>
  <section class="panel-28565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28565");
const base = ref(28565);
const total = computed(() => base.value * 2);

function incrementar28565() {
  base.value++;
}
</script>
