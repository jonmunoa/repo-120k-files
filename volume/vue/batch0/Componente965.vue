<template>
  <section class="panel-965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 965");
const base = ref(965);
const total = computed(() => base.value * 2);

function incrementar965() {
  base.value++;
}
</script>
