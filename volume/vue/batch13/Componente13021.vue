<template>
  <section class="panel-13021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13021");
const base = ref(13021);
const total = computed(() => base.value * 2);

function incrementar13021() {
  base.value++;
}
</script>
