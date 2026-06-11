<template>
  <section class="panel-28957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28957");
const base = ref(28957);
const total = computed(() => base.value * 2);

function incrementar28957() {
  base.value++;
}
</script>
