<template>
  <section class="panel-22273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22273");
const base = ref(22273);
const total = computed(() => base.value * 2);

function incrementar22273() {
  base.value++;
}
</script>
