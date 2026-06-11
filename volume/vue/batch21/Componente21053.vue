<template>
  <section class="panel-21053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21053");
const base = ref(21053);
const total = computed(() => base.value * 2);

function incrementar21053() {
  base.value++;
}
</script>
