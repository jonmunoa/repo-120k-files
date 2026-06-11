<template>
  <section class="panel-12325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12325");
const base = ref(12325);
const total = computed(() => base.value * 2);

function incrementar12325() {
  base.value++;
}
</script>
