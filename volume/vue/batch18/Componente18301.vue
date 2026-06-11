<template>
  <section class="panel-18301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18301");
const base = ref(18301);
const total = computed(() => base.value * 2);

function incrementar18301() {
  base.value++;
}
</script>
