<template>
  <section class="panel-31301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31301");
const base = ref(31301);
const total = computed(() => base.value * 2);

function incrementar31301() {
  base.value++;
}
</script>
