<template>
  <section class="panel-36997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36997");
const base = ref(36997);
const total = computed(() => base.value * 2);

function incrementar36997() {
  base.value++;
}
</script>
