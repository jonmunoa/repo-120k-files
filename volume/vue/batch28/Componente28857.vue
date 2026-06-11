<template>
  <section class="panel-28857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28857");
const base = ref(28857);
const total = computed(() => base.value * 2);

function incrementar28857() {
  base.value++;
}
</script>
