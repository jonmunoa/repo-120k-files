<template>
  <section class="panel-22061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22061");
const base = ref(22061);
const total = computed(() => base.value * 2);

function incrementar22061() {
  base.value++;
}
</script>
