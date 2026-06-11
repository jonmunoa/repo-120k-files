<template>
  <section class="panel-33809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33809");
const base = ref(33809);
const total = computed(() => base.value * 2);

function incrementar33809() {
  base.value++;
}
</script>
