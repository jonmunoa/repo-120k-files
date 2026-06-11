<template>
  <section class="panel-37945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37945");
const base = ref(37945);
const total = computed(() => base.value * 2);

function incrementar37945() {
  base.value++;
}
</script>
