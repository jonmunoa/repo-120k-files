<template>
  <section class="panel-28417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28417");
const base = ref(28417);
const total = computed(() => base.value * 2);

function incrementar28417() {
  base.value++;
}
</script>
