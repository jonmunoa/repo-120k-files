<template>
  <section class="panel-21409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21409");
const base = ref(21409);
const total = computed(() => base.value * 2);

function incrementar21409() {
  base.value++;
}
</script>
