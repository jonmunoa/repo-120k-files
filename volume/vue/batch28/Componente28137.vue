<template>
  <section class="panel-28137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28137");
const base = ref(28137);
const total = computed(() => base.value * 2);

function incrementar28137() {
  base.value++;
}
</script>
