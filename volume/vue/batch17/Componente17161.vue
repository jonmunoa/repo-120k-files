<template>
  <section class="panel-17161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17161");
const base = ref(17161);
const total = computed(() => base.value * 2);

function incrementar17161() {
  base.value++;
}
</script>
