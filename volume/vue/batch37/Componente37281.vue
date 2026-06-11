<template>
  <section class="panel-37281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37281");
const base = ref(37281);
const total = computed(() => base.value * 2);

function incrementar37281() {
  base.value++;
}
</script>
