<template>
  <section class="panel-37229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37229");
const base = ref(37229);
const total = computed(() => base.value * 2);

function incrementar37229() {
  base.value++;
}
</script>
