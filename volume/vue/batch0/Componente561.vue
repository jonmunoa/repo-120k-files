<template>
  <section class="panel-561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 561");
const base = ref(561);
const total = computed(() => base.value * 2);

function incrementar561() {
  base.value++;
}
</script>
