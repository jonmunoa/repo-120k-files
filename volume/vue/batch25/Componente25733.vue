<template>
  <section class="panel-25733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25733");
const base = ref(25733);
const total = computed(() => base.value * 2);

function incrementar25733() {
  base.value++;
}
</script>
