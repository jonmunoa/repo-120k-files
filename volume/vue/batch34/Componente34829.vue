<template>
  <section class="panel-34829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34829");
const base = ref(34829);
const total = computed(() => base.value * 2);

function incrementar34829() {
  base.value++;
}
</script>
