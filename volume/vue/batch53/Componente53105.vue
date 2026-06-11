<template>
  <section class="panel-53105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53105");
const base = ref(53105);
const total = computed(() => base.value * 2);

function incrementar53105() {
  base.value++;
}
</script>
