<template>
  <section class="panel-17713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17713");
const base = ref(17713);
const total = computed(() => base.value * 2);

function incrementar17713() {
  base.value++;
}
</script>
