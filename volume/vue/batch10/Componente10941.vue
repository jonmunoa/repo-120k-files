<template>
  <section class="panel-10941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10941");
const base = ref(10941);
const total = computed(() => base.value * 2);

function incrementar10941() {
  base.value++;
}
</script>
