<template>
  <section class="panel-52089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52089");
const base = ref(52089);
const total = computed(() => base.value * 2);

function incrementar52089() {
  base.value++;
}
</script>
