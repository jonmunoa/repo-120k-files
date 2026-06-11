<template>
  <section class="panel-11257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11257");
const base = ref(11257);
const total = computed(() => base.value * 2);

function incrementar11257() {
  base.value++;
}
</script>
