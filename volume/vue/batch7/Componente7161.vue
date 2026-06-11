<template>
  <section class="panel-7161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7161");
const base = ref(7161);
const total = computed(() => base.value * 2);

function incrementar7161() {
  base.value++;
}
</script>
