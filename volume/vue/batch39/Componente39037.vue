<template>
  <section class="panel-39037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39037");
const base = ref(39037);
const total = computed(() => base.value * 2);

function incrementar39037() {
  base.value++;
}
</script>
