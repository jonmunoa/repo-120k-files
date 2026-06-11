<template>
  <section class="panel-14673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14673");
const base = ref(14673);
const total = computed(() => base.value * 2);

function incrementar14673() {
  base.value++;
}
</script>
