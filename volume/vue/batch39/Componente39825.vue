<template>
  <section class="panel-39825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39825");
const base = ref(39825);
const total = computed(() => base.value * 2);

function incrementar39825() {
  base.value++;
}
</script>
