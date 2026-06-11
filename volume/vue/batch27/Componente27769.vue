<template>
  <section class="panel-27769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27769");
const base = ref(27769);
const total = computed(() => base.value * 2);

function incrementar27769() {
  base.value++;
}
</script>
