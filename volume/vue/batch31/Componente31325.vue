<template>
  <section class="panel-31325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31325");
const base = ref(31325);
const total = computed(() => base.value * 2);

function incrementar31325() {
  base.value++;
}
</script>
