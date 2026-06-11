<template>
  <section class="panel-27645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27645");
const base = ref(27645);
const total = computed(() => base.value * 2);

function incrementar27645() {
  base.value++;
}
</script>
