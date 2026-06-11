<template>
  <section class="panel-16661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16661");
const base = ref(16661);
const total = computed(() => base.value * 2);

function incrementar16661() {
  base.value++;
}
</script>
