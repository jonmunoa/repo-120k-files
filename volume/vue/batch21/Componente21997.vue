<template>
  <section class="panel-21997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21997");
const base = ref(21997);
const total = computed(() => base.value * 2);

function incrementar21997() {
  base.value++;
}
</script>
