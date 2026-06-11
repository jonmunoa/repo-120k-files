<template>
  <section class="panel-18593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18593");
const base = ref(18593);
const total = computed(() => base.value * 2);

function incrementar18593() {
  base.value++;
}
</script>
