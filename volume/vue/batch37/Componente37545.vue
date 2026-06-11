<template>
  <section class="panel-37545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37545");
const base = ref(37545);
const total = computed(() => base.value * 2);

function incrementar37545() {
  base.value++;
}
</script>
