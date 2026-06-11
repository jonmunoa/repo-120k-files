<template>
  <section class="panel-28169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28169");
const base = ref(28169);
const total = computed(() => base.value * 2);

function incrementar28169() {
  base.value++;
}
</script>
