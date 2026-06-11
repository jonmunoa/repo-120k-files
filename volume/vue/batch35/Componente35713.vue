<template>
  <section class="panel-35713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35713");
const base = ref(35713);
const total = computed(() => base.value * 2);

function incrementar35713() {
  base.value++;
}
</script>
