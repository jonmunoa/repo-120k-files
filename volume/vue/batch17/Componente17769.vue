<template>
  <section class="panel-17769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17769");
const base = ref(17769);
const total = computed(() => base.value * 2);

function incrementar17769() {
  base.value++;
}
</script>
