<template>
  <section class="panel-40441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40441");
const base = ref(40441);
const total = computed(() => base.value * 2);

function incrementar40441() {
  base.value++;
}
</script>
