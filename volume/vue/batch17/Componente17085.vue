<template>
  <section class="panel-17085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17085");
const base = ref(17085);
const total = computed(() => base.value * 2);

function incrementar17085() {
  base.value++;
}
</script>
