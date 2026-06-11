<template>
  <section class="panel-15037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15037");
const base = ref(15037);
const total = computed(() => base.value * 2);

function incrementar15037() {
  base.value++;
}
</script>
