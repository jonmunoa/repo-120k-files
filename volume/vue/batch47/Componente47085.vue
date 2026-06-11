<template>
  <section class="panel-47085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47085");
const base = ref(47085);
const total = computed(() => base.value * 2);

function incrementar47085() {
  base.value++;
}
</script>
