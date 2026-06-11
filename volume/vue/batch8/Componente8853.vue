<template>
  <section class="panel-8853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8853");
const base = ref(8853);
const total = computed(() => base.value * 2);

function incrementar8853() {
  base.value++;
}
</script>
