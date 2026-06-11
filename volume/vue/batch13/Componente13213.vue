<template>
  <section class="panel-13213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13213");
const base = ref(13213);
const total = computed(() => base.value * 2);

function incrementar13213() {
  base.value++;
}
</script>
