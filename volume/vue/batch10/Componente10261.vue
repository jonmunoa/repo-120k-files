<template>
  <section class="panel-10261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10261");
const base = ref(10261);
const total = computed(() => base.value * 2);

function incrementar10261() {
  base.value++;
}
</script>
