<template>
  <section class="panel-8741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8741");
const base = ref(8741);
const total = computed(() => base.value * 2);

function incrementar8741() {
  base.value++;
}
</script>
