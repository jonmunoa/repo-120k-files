<template>
  <section class="panel-28681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28681");
const base = ref(28681);
const total = computed(() => base.value * 2);

function incrementar28681() {
  base.value++;
}
</script>
