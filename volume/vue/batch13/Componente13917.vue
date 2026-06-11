<template>
  <section class="panel-13917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13917");
const base = ref(13917);
const total = computed(() => base.value * 2);

function incrementar13917() {
  base.value++;
}
</script>
