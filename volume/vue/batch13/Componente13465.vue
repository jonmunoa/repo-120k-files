<template>
  <section class="panel-13465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13465");
const base = ref(13465);
const total = computed(() => base.value * 2);

function incrementar13465() {
  base.value++;
}
</script>
