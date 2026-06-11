<template>
  <section class="panel-18769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18769");
const base = ref(18769);
const total = computed(() => base.value * 2);

function incrementar18769() {
  base.value++;
}
</script>
