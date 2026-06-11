<template>
  <section class="panel-38409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38409");
const base = ref(38409);
const total = computed(() => base.value * 2);

function incrementar38409() {
  base.value++;
}
</script>
