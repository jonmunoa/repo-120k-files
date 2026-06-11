<template>
  <section class="panel-7301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7301");
const base = ref(7301);
const total = computed(() => base.value * 2);

function incrementar7301() {
  base.value++;
}
</script>
