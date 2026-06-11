<template>
  <section class="panel-21861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21861");
const base = ref(21861);
const total = computed(() => base.value * 2);

function incrementar21861() {
  base.value++;
}
</script>
