<template>
  <section class="panel-44997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44997");
const base = ref(44997);
const total = computed(() => base.value * 2);

function incrementar44997() {
  base.value++;
}
</script>
