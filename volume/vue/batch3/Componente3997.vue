<template>
  <section class="panel-3997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3997");
const base = ref(3997);
const total = computed(() => base.value * 2);

function incrementar3997() {
  base.value++;
}
</script>
