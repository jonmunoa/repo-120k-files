<template>
  <section class="panel-11261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11261");
const base = ref(11261);
const total = computed(() => base.value * 2);

function incrementar11261() {
  base.value++;
}
</script>
