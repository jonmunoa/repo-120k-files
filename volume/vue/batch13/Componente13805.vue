<template>
  <section class="panel-13805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13805");
const base = ref(13805);
const total = computed(() => base.value * 2);

function incrementar13805() {
  base.value++;
}
</script>
