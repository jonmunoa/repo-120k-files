<template>
  <section class="panel-19037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19037");
const base = ref(19037);
const total = computed(() => base.value * 2);

function incrementar19037() {
  base.value++;
}
</script>
