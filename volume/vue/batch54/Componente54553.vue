<template>
  <section class="panel-54553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54553");
const base = ref(54553);
const total = computed(() => base.value * 2);

function incrementar54553() {
  base.value++;
}
</script>
