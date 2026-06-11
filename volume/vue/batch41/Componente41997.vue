<template>
  <section class="panel-41997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41997");
const base = ref(41997);
const total = computed(() => base.value * 2);

function incrementar41997() {
  base.value++;
}
</script>
