<template>
  <section class="panel-12965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12965");
const base = ref(12965);
const total = computed(() => base.value * 2);

function incrementar12965() {
  base.value++;
}
</script>
