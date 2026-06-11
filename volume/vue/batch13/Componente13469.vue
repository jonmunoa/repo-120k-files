<template>
  <section class="panel-13469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13469");
const base = ref(13469);
const total = computed(() => base.value * 2);

function incrementar13469() {
  base.value++;
}
</script>
