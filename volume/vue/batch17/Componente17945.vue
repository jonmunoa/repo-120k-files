<template>
  <section class="panel-17945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17945");
const base = ref(17945);
const total = computed(() => base.value * 2);

function incrementar17945() {
  base.value++;
}
</script>
