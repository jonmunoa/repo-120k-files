<template>
  <section class="panel-37485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37485");
const base = ref(37485);
const total = computed(() => base.value * 2);

function incrementar37485() {
  base.value++;
}
</script>
