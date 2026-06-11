<template>
  <section class="panel-18149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18149");
const base = ref(18149);
const total = computed(() => base.value * 2);

function incrementar18149() {
  base.value++;
}
</script>
