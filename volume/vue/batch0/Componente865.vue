<template>
  <section class="panel-865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 865");
const base = ref(865);
const total = computed(() => base.value * 2);

function incrementar865() {
  base.value++;
}
</script>
