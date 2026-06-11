<template>
  <section class="panel-35277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35277");
const base = ref(35277);
const total = computed(() => base.value * 2);

function incrementar35277() {
  base.value++;
}
</script>
