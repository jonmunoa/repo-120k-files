<template>
  <section class="panel-13333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13333");
const base = ref(13333);
const total = computed(() => base.value * 2);

function incrementar13333() {
  base.value++;
}
</script>
