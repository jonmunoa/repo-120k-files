<template>
  <section class="panel-44393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44393");
const base = ref(44393);
const total = computed(() => base.value * 2);

function incrementar44393() {
  base.value++;
}
</script>
