<template>
  <section class="panel-12997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12997");
const base = ref(12997);
const total = computed(() => base.value * 2);

function incrementar12997() {
  base.value++;
}
</script>
