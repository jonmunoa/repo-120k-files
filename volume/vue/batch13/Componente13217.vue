<template>
  <section class="panel-13217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13217");
const base = ref(13217);
const total = computed(() => base.value * 2);

function incrementar13217() {
  base.value++;
}
</script>
