<template>
  <section class="panel-13725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13725");
const base = ref(13725);
const total = computed(() => base.value * 2);

function incrementar13725() {
  base.value++;
}
</script>
