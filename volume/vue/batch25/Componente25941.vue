<template>
  <section class="panel-25941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25941");
const base = ref(25941);
const total = computed(() => base.value * 2);

function incrementar25941() {
  base.value++;
}
</script>
