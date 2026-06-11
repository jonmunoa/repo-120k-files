<template>
  <section class="panel-37301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37301");
const base = ref(37301);
const total = computed(() => base.value * 2);

function incrementar37301() {
  base.value++;
}
</script>
