<template>
  <section class="panel-50861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50861");
const base = ref(50861);
const total = computed(() => base.value * 2);

function incrementar50861() {
  base.value++;
}
</script>
