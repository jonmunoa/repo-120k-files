<template>
  <section class="panel-13817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13817");
const base = ref(13817);
const total = computed(() => base.value * 2);

function incrementar13817() {
  base.value++;
}
</script>
