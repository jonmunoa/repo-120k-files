<template>
  <section class="panel-39941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39941");
const base = ref(39941);
const total = computed(() => base.value * 2);

function incrementar39941() {
  base.value++;
}
</script>
