<template>
  <section class="panel-19857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19857");
const base = ref(19857);
const total = computed(() => base.value * 2);

function incrementar19857() {
  base.value++;
}
</script>
