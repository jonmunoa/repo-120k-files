<template>
  <section class="panel-47149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47149");
const base = ref(47149);
const total = computed(() => base.value * 2);

function incrementar47149() {
  base.value++;
}
</script>
