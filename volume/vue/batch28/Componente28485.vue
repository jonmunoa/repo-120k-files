<template>
  <section class="panel-28485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28485");
const base = ref(28485);
const total = computed(() => base.value * 2);

function incrementar28485() {
  base.value++;
}
</script>
