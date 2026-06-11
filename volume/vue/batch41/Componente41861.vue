<template>
  <section class="panel-41861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41861");
const base = ref(41861);
const total = computed(() => base.value * 2);

function incrementar41861() {
  base.value++;
}
</script>
