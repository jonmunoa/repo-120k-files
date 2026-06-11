<template>
  <section class="panel-39233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39233");
const base = ref(39233);
const total = computed(() => base.value * 2);

function incrementar39233() {
  base.value++;
}
</script>
