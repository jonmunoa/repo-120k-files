<template>
  <section class="panel-20409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20409");
const base = ref(20409);
const total = computed(() => base.value * 2);

function incrementar20409() {
  base.value++;
}
</script>
