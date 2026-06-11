<template>
  <section class="panel-9273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9273");
const base = ref(9273);
const total = computed(() => base.value * 2);

function incrementar9273() {
  base.value++;
}
</script>
