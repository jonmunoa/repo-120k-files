<template>
  <section class="panel-37273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37273");
const base = ref(37273);
const total = computed(() => base.value * 2);

function incrementar37273() {
  base.value++;
}
</script>
