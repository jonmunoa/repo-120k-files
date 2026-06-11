<template>
  <section class="panel-25829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25829");
const base = ref(25829);
const total = computed(() => base.value * 2);

function incrementar25829() {
  base.value++;
}
</script>
