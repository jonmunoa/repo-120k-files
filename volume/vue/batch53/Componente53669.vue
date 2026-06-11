<template>
  <section class="panel-53669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53669");
const base = ref(53669);
const total = computed(() => base.value * 2);

function incrementar53669() {
  base.value++;
}
</script>
