<template>
  <section class="panel-19861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19861");
const base = ref(19861);
const total = computed(() => base.value * 2);

function incrementar19861() {
  base.value++;
}
</script>
