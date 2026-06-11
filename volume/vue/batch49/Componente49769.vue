<template>
  <section class="panel-49769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49769");
const base = ref(49769);
const total = computed(() => base.value * 2);

function incrementar49769() {
  base.value++;
}
</script>
