<template>
  <section class="panel-10037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10037");
const base = ref(10037);
const total = computed(() => base.value * 2);

function incrementar10037() {
  base.value++;
}
</script>
