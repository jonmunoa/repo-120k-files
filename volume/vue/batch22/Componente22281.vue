<template>
  <section class="panel-22281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22281");
const base = ref(22281);
const total = computed(() => base.value * 2);

function incrementar22281() {
  base.value++;
}
</script>
