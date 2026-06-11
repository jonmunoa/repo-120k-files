<template>
  <section class="panel-49853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49853");
const base = ref(49853);
const total = computed(() => base.value * 2);

function incrementar49853() {
  base.value++;
}
</script>
