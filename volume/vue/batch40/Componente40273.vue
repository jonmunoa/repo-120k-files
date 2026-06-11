<template>
  <section class="panel-40273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40273");
const base = ref(40273);
const total = computed(() => base.value * 2);

function incrementar40273() {
  base.value++;
}
</script>
