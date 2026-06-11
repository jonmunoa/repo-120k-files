<template>
  <section class="panel-41037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41037");
const base = ref(41037);
const total = computed(() => base.value * 2);

function incrementar41037() {
  base.value++;
}
</script>
