<template>
  <section class="panel-35105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35105");
const base = ref(35105);
const total = computed(() => base.value * 2);

function incrementar35105() {
  base.value++;
}
</script>
