<template>
  <section class="panel-11733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11733");
const base = ref(11733);
const total = computed(() => base.value * 2);

function incrementar11733() {
  base.value++;
}
</script>
