<template>
  <section class="panel-47741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47741");
const base = ref(47741);
const total = computed(() => base.value * 2);

function incrementar47741() {
  base.value++;
}
</script>
