<template>
  <section class="panel-28861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28861");
const base = ref(28861);
const total = computed(() => base.value * 2);

function incrementar28861() {
  base.value++;
}
</script>
