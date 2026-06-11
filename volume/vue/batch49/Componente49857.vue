<template>
  <section class="panel-49857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49857");
const base = ref(49857);
const total = computed(() => base.value * 2);

function incrementar49857() {
  base.value++;
}
</script>
