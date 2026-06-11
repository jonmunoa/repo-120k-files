<template>
  <section class="panel-7805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7805");
const base = ref(7805);
const total = computed(() => base.value * 2);

function incrementar7805() {
  base.value++;
}
</script>
