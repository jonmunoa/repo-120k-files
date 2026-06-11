<template>
  <section class="panel-37721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37721");
const base = ref(37721);
const total = computed(() => base.value * 2);

function incrementar37721() {
  base.value++;
}
</script>
