<template>
  <section class="panel-13689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13689");
const base = ref(13689);
const total = computed(() => base.value * 2);

function incrementar13689() {
  base.value++;
}
</script>
