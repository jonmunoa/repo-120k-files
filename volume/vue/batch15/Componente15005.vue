<template>
  <section class="panel-15005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15005");
const base = ref(15005);
const total = computed(() => base.value * 2);

function incrementar15005() {
  base.value++;
}
</script>
