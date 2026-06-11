<template>
  <section class="panel-11965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11965");
const base = ref(11965);
const total = computed(() => base.value * 2);

function incrementar11965() {
  base.value++;
}
</script>
