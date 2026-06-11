<template>
  <section class="panel-27213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27213");
const base = ref(27213);
const total = computed(() => base.value * 2);

function incrementar27213() {
  base.value++;
}
</script>
