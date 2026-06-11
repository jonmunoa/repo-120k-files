<template>
  <section class="panel-14201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14201");
const base = ref(14201);
const total = computed(() => base.value * 2);

function incrementar14201() {
  base.value++;
}
</script>
