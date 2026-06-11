<template>
  <section class="panel-13833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13833");
const base = ref(13833);
const total = computed(() => base.value * 2);

function incrementar13833() {
  base.value++;
}
</script>
