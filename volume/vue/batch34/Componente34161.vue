<template>
  <section class="panel-34161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34161");
const base = ref(34161);
const total = computed(() => base.value * 2);

function incrementar34161() {
  base.value++;
}
</script>
