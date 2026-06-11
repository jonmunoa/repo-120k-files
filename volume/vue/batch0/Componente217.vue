<template>
  <section class="panel-217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 217");
const base = ref(217);
const total = computed(() => base.value * 2);

function incrementar217() {
  base.value++;
}
</script>
