<template>
  <section class="panel-11161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11161");
const base = ref(11161);
const total = computed(() => base.value * 2);

function incrementar11161() {
  base.value++;
}
</script>
