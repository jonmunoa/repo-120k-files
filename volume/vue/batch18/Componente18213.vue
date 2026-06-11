<template>
  <section class="panel-18213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18213");
const base = ref(18213);
const total = computed(() => base.value * 2);

function incrementar18213() {
  base.value++;
}
</script>
