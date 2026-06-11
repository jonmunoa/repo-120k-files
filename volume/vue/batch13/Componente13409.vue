<template>
  <section class="panel-13409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13409");
const base = ref(13409);
const total = computed(() => base.value * 2);

function incrementar13409() {
  base.value++;
}
</script>
