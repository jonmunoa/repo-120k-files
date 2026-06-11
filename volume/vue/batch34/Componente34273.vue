<template>
  <section class="panel-34273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34273");
const base = ref(34273);
const total = computed(() => base.value * 2);

function incrementar34273() {
  base.value++;
}
</script>
