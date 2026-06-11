<template>
  <section class="panel-2721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2721");
const base = ref(2721);
const total = computed(() => base.value * 2);

function incrementar2721() {
  base.value++;
}
</script>
