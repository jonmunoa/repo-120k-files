<template>
  <section class="panel-11409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11409");
const base = ref(11409);
const total = computed(() => base.value * 2);

function incrementar11409() {
  base.value++;
}
</script>
