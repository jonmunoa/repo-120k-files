<template>
  <section class="panel-21161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21161");
const base = ref(21161);
const total = computed(() => base.value * 2);

function incrementar21161() {
  base.value++;
}
</script>
