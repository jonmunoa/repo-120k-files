<template>
  <section class="panel-5713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5713");
const base = ref(5713);
const total = computed(() => base.value * 2);

function incrementar5713() {
  base.value++;
}
</script>
