<template>
  <section class="panel-28805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28805");
const base = ref(28805);
const total = computed(() => base.value * 2);

function incrementar28805() {
  base.value++;
}
</script>
