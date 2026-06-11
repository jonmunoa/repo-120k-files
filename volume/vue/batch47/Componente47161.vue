<template>
  <section class="panel-47161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47161");
const base = ref(47161);
const total = computed(() => base.value * 2);

function incrementar47161() {
  base.value++;
}
</script>
