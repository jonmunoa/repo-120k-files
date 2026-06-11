<template>
  <section class="panel-9861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9861");
const base = ref(9861);
const total = computed(() => base.value * 2);

function incrementar9861() {
  base.value++;
}
</script>
