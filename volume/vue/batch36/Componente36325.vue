<template>
  <section class="panel-36325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36325");
const base = ref(36325);
const total = computed(() => base.value * 2);

function incrementar36325() {
  base.value++;
}
</script>
