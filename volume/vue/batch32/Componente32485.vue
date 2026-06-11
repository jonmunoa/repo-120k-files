<template>
  <section class="panel-32485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32485");
const base = ref(32485);
const total = computed(() => base.value * 2);

function incrementar32485() {
  base.value++;
}
</script>
