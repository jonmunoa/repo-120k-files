<template>
  <section class="panel-15273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15273");
const base = ref(15273);
const total = computed(() => base.value * 2);

function incrementar15273() {
  base.value++;
}
</script>
