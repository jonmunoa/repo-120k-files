<template>
  <section class="panel-13861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13861");
const base = ref(13861);
const total = computed(() => base.value * 2);

function incrementar13861() {
  base.value++;
}
</script>
