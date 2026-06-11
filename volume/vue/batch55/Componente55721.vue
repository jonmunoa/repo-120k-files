<template>
  <section class="panel-55721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55721");
const base = ref(55721);
const total = computed(() => base.value * 2);

function incrementar55721() {
  base.value++;
}
</script>
