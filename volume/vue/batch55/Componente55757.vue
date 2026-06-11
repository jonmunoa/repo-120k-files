<template>
  <section class="panel-55757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55757");
const base = ref(55757);
const total = computed(() => base.value * 2);

function incrementar55757() {
  base.value++;
}
</script>
