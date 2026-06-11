<template>
  <section class="panel-18857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18857");
const base = ref(18857);
const total = computed(() => base.value * 2);

function incrementar18857() {
  base.value++;
}
</script>
