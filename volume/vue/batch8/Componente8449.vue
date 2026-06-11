<template>
  <section class="panel-8449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8449");
const base = ref(8449);
const total = computed(() => base.value * 2);

function incrementar8449() {
  base.value++;
}
</script>
