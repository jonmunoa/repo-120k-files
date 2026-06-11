<template>
  <section class="panel-27149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27149");
const base = ref(27149);
const total = computed(() => base.value * 2);

function incrementar27149() {
  base.value++;
}
</script>
