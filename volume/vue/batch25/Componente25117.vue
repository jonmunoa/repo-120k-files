<template>
  <section class="panel-25117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25117");
const base = ref(25117);
const total = computed(() => base.value * 2);

function incrementar25117() {
  base.value++;
}
</script>
