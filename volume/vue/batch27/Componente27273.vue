<template>
  <section class="panel-27273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27273");
const base = ref(27273);
const total = computed(() => base.value * 2);

function incrementar27273() {
  base.value++;
}
</script>
