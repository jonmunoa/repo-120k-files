<template>
  <section class="panel-27809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27809");
const base = ref(27809);
const total = computed(() => base.value * 2);

function incrementar27809() {
  base.value++;
}
</script>
