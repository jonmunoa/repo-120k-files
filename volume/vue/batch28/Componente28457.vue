<template>
  <section class="panel-28457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28457");
const base = ref(28457);
const total = computed(() => base.value * 2);

function incrementar28457() {
  base.value++;
}
</script>
