<template>
  <section class="panel-12037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12037");
const base = ref(12037);
const total = computed(() => base.value * 2);

function incrementar12037() {
  base.value++;
}
</script>
