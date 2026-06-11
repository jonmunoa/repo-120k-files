<template>
  <section class="panel-10857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10857");
const base = ref(10857);
const total = computed(() => base.value * 2);

function incrementar10857() {
  base.value++;
}
</script>
