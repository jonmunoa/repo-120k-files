<template>
  <section class="panel-38513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38513");
const base = ref(38513);
const total = computed(() => base.value * 2);

function incrementar38513() {
  base.value++;
}
</script>
