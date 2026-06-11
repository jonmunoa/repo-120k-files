<template>
  <section class="panel-14273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14273");
const base = ref(14273);
const total = computed(() => base.value * 2);

function incrementar14273() {
  base.value++;
}
</script>
