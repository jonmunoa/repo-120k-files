<template>
  <section class="panel-18953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18953");
const base = ref(18953);
const total = computed(() => base.value * 2);

function incrementar18953() {
  base.value++;
}
</script>
