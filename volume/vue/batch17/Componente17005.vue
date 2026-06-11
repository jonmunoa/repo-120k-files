<template>
  <section class="panel-17005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17005");
const base = ref(17005);
const total = computed(() => base.value * 2);

function incrementar17005() {
  base.value++;
}
</script>
