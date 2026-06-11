<template>
  <section class="panel-33345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33345");
const base = ref(33345);
const total = computed(() => base.value * 2);

function incrementar33345() {
  base.value++;
}
</script>
