<template>
  <section class="panel-573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 573");
const base = ref(573);
const total = computed(() => base.value * 2);

function incrementar573() {
  base.value++;
}
</script>
