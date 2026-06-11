<template>
  <section class="panel-27725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27725");
const base = ref(27725);
const total = computed(() => base.value * 2);

function incrementar27725() {
  base.value++;
}
</script>
