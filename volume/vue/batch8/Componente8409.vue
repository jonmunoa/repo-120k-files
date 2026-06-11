<template>
  <section class="panel-8409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8409");
const base = ref(8409);
const total = computed(() => base.value * 2);

function incrementar8409() {
  base.value++;
}
</script>
