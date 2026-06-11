<template>
  <section class="panel-47881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47881");
const base = ref(47881);
const total = computed(() => base.value * 2);

function incrementar47881() {
  base.value++;
}
</script>
