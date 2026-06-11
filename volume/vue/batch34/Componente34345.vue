<template>
  <section class="panel-34345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34345");
const base = ref(34345);
const total = computed(() => base.value * 2);

function incrementar34345() {
  base.value++;
}
</script>
