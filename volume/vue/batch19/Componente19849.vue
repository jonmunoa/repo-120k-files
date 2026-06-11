<template>
  <section class="panel-19849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19849");
const base = ref(19849);
const total = computed(() => base.value * 2);

function incrementar19849() {
  base.value++;
}
</script>
