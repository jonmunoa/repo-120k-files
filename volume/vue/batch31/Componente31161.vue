<template>
  <section class="panel-31161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31161");
const base = ref(31161);
const total = computed(() => base.value * 2);

function incrementar31161() {
  base.value++;
}
</script>
