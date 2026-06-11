<template>
  <section class="panel-13629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13629");
const base = ref(13629);
const total = computed(() => base.value * 2);

function incrementar13629() {
  base.value++;
}
</script>
