<template>
  <section class="panel-56809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56809");
const base = ref(56809);
const total = computed(() => base.value * 2);

function incrementar56809() {
  base.value++;
}
</script>
