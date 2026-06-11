<template>
  <section class="panel-49861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49861");
const base = ref(49861);
const total = computed(() => base.value * 2);

function incrementar49861() {
  base.value++;
}
</script>
