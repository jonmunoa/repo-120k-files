<template>
  <section class="panel-44817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44817");
const base = ref(44817);
const total = computed(() => base.value * 2);

function incrementar44817() {
  base.value++;
}
</script>
