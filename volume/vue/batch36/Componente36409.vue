<template>
  <section class="panel-36409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36409");
const base = ref(36409);
const total = computed(() => base.value * 2);

function incrementar36409() {
  base.value++;
}
</script>
