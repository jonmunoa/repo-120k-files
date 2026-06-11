<template>
  <section class="panel-55409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55409");
const base = ref(55409);
const total = computed(() => base.value * 2);

function incrementar55409() {
  base.value++;
}
</script>
