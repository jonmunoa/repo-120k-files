<template>
  <section class="panel-2857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2857");
const base = ref(2857);
const total = computed(() => base.value * 2);

function incrementar2857() {
  base.value++;
}
</script>
