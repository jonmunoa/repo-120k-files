<template>
  <section class="panel-33769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33769");
const base = ref(33769);
const total = computed(() => base.value * 2);

function incrementar33769() {
  base.value++;
}
</script>
