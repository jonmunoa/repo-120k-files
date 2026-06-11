<template>
  <section class="panel-28977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28977");
const base = ref(28977);
const total = computed(() => base.value * 2);

function incrementar28977() {
  base.value++;
}
</script>
