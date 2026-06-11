<template>
  <section class="panel-40149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40149");
const base = ref(40149);
const total = computed(() => base.value * 2);

function incrementar40149() {
  base.value++;
}
</script>
