<template>
  <section class="panel-28813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28813");
const base = ref(28813);
const total = computed(() => base.value * 2);

function incrementar28813() {
  base.value++;
}
</script>
