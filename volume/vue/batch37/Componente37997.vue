<template>
  <section class="panel-37997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37997");
const base = ref(37997);
const total = computed(() => base.value * 2);

function incrementar37997() {
  base.value++;
}
</script>
