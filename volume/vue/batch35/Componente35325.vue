<template>
  <section class="panel-35325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35325");
const base = ref(35325);
const total = computed(() => base.value * 2);

function incrementar35325() {
  base.value++;
}
</script>
