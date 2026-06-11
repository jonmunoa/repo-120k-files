<template>
  <section class="panel-35357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35357");
const base = ref(35357);
const total = computed(() => base.value * 2);

function incrementar35357() {
  base.value++;
}
</script>
