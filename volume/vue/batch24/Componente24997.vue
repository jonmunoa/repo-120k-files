<template>
  <section class="panel-24997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24997");
const base = ref(24997);
const total = computed(() => base.value * 2);

function incrementar24997() {
  base.value++;
}
</script>
