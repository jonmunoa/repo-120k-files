<template>
  <section class="panel-27721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27721");
const base = ref(27721);
const total = computed(() => base.value * 2);

function incrementar27721() {
  base.value++;
}
</script>
