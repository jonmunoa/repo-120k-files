<template>
  <section class="panel-11829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11829");
const base = ref(11829);
const total = computed(() => base.value * 2);

function incrementar11829() {
  base.value++;
}
</script>
