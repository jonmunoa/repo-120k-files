<template>
  <section class="panel-13645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13645");
const base = ref(13645);
const total = computed(() => base.value * 2);

function incrementar13645() {
  base.value++;
}
</script>
