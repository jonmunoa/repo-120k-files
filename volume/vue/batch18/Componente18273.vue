<template>
  <section class="panel-18273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18273");
const base = ref(18273);
const total = computed(() => base.value * 2);

function incrementar18273() {
  base.value++;
}
</script>
