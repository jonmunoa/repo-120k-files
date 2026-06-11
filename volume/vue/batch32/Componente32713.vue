<template>
  <section class="panel-32713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32713");
const base = ref(32713);
const total = computed(() => base.value * 2);

function incrementar32713() {
  base.value++;
}
</script>
