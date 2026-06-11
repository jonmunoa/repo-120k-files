<template>
  <section class="panel-33741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33741");
const base = ref(33741);
const total = computed(() => base.value * 2);

function incrementar33741() {
  base.value++;
}
</script>
