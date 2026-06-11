<template>
  <section class="panel-7825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7825");
const base = ref(7825);
const total = computed(() => base.value * 2);

function incrementar7825() {
  base.value++;
}
</script>
