<template>
  <section class="panel-2533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2533");
const base = ref(2533);
const total = computed(() => base.value * 2);

function incrementar2533() {
  base.value++;
}
</script>
