<template>
  <section class="panel-13553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13553");
const base = ref(13553);
const total = computed(() => base.value * 2);

function incrementar13553() {
  base.value++;
}
</script>
