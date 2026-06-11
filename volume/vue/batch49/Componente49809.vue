<template>
  <section class="panel-49809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49809");
const base = ref(49809);
const total = computed(() => base.value * 2);

function incrementar49809() {
  base.value++;
}
</script>
