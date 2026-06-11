<template>
  <section class="panel-23477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23477");
const base = ref(23477);
const total = computed(() => base.value * 2);

function incrementar23477() {
  base.value++;
}
</script>
