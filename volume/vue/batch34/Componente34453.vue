<template>
  <section class="panel-34453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34453");
const base = ref(34453);
const total = computed(() => base.value * 2);

function incrementar34453() {
  base.value++;
}
</script>
