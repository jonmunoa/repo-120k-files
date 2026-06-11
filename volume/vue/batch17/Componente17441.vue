<template>
  <section class="panel-17441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17441");
const base = ref(17441);
const total = computed(() => base.value * 2);

function incrementar17441() {
  base.value++;
}
</script>
