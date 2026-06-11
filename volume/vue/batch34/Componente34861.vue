<template>
  <section class="panel-34861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34861");
const base = ref(34861);
const total = computed(() => base.value * 2);

function incrementar34861() {
  base.value++;
}
</script>
