<template>
  <section class="panel-51857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51857");
const base = ref(51857);
const total = computed(() => base.value * 2);

function incrementar51857() {
  base.value++;
}
</script>
