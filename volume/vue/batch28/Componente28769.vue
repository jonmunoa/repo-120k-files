<template>
  <section class="panel-28769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28769");
const base = ref(28769);
const total = computed(() => base.value * 2);

function incrementar28769() {
  base.value++;
}
</script>
