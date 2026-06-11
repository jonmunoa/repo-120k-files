<template>
  <section class="panel-2329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2329");
const base = ref(2329);
const total = computed(() => base.value * 2);

function incrementar2329() {
  base.value++;
}
</script>
