<template>
  <section class="panel-18361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18361");
const base = ref(18361);
const total = computed(() => base.value * 2);

function incrementar18361() {
  base.value++;
}
</script>
