<template>
  <section class="panel-51509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51509");
const base = ref(51509);
const total = computed(() => base.value * 2);

function incrementar51509() {
  base.value++;
}
</script>
