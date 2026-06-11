<template>
  <section class="panel-13157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13157");
const base = ref(13157);
const total = computed(() => base.value * 2);

function incrementar13157() {
  base.value++;
}
</script>
