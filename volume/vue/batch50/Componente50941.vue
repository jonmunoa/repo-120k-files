<template>
  <section class="panel-50941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50941");
const base = ref(50941);
const total = computed(() => base.value * 2);

function incrementar50941() {
  base.value++;
}
</script>
