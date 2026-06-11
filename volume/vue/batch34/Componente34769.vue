<template>
  <section class="panel-34769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34769");
const base = ref(34769);
const total = computed(() => base.value * 2);

function incrementar34769() {
  base.value++;
}
</script>
