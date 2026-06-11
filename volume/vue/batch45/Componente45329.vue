<template>
  <section class="panel-45329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45329");
const base = ref(45329);
const total = computed(() => base.value * 2);

function incrementar45329() {
  base.value++;
}
</script>
