<template>
  <section class="panel-14141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14141");
const base = ref(14141);
const total = computed(() => base.value * 2);

function incrementar14141() {
  base.value++;
}
</script>
