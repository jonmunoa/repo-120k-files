<template>
  <section class="panel-53777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53777");
const base = ref(53777);
const total = computed(() => base.value * 2);

function incrementar53777() {
  base.value++;
}
</script>
