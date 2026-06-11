<template>
  <section class="panel-13353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13353");
const base = ref(13353);
const total = computed(() => base.value * 2);

function incrementar13353() {
  base.value++;
}
</script>
