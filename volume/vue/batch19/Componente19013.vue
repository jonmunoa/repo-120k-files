<template>
  <section class="panel-19013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19013");
const base = ref(19013);
const total = computed(() => base.value * 2);

function incrementar19013() {
  base.value++;
}
</script>
