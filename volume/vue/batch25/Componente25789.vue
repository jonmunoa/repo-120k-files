<template>
  <section class="panel-25789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25789");
const base = ref(25789);
const total = computed(() => base.value * 2);

function incrementar25789() {
  base.value++;
}
</script>
