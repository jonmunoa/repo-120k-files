<template>
  <section class="panel-17861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17861");
const base = ref(17861);
const total = computed(() => base.value * 2);

function incrementar17861() {
  base.value++;
}
</script>
