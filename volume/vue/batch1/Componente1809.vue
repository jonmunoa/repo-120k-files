<template>
  <section class="panel-1809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1809");
const base = ref(1809);
const total = computed(() => base.value * 2);

function incrementar1809() {
  base.value++;
}
</script>
