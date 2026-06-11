<template>
  <section class="panel-35877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35877");
const base = ref(35877);
const total = computed(() => base.value * 2);

function incrementar35877() {
  base.value++;
}
</script>
