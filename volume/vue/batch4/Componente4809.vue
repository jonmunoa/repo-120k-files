<template>
  <section class="panel-4809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4809");
const base = ref(4809);
const total = computed(() => base.value * 2);

function incrementar4809() {
  base.value++;
}
</script>
