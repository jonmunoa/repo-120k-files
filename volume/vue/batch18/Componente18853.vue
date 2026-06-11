<template>
  <section class="panel-18853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18853");
const base = ref(18853);
const total = computed(() => base.value * 2);

function incrementar18853() {
  base.value++;
}
</script>
