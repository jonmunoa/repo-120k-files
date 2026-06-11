<template>
  <section class="panel-33861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33861");
const base = ref(33861);
const total = computed(() => base.value * 2);

function incrementar33861() {
  base.value++;
}
</script>
