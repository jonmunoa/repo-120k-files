<template>
  <section class="panel-8581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8581");
const base = ref(8581);
const total = computed(() => base.value * 2);

function incrementar8581() {
  base.value++;
}
</script>
