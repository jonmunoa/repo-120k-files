<template>
  <section class="panel-14917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14917");
const base = ref(14917);
const total = computed(() => base.value * 2);

function incrementar14917() {
  base.value++;
}
</script>
