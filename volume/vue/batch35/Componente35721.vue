<template>
  <section class="panel-35721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35721");
const base = ref(35721);
const total = computed(() => base.value * 2);

function incrementar35721() {
  base.value++;
}
</script>
