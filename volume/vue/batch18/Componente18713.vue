<template>
  <section class="panel-18713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18713");
const base = ref(18713);
const total = computed(() => base.value * 2);

function incrementar18713() {
  base.value++;
}
</script>
