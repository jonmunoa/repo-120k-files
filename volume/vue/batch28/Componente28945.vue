<template>
  <section class="panel-28945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28945");
const base = ref(28945);
const total = computed(() => base.value * 2);

function incrementar28945() {
  base.value++;
}
</script>
