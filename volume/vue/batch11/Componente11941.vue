<template>
  <section class="panel-11941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11941");
const base = ref(11941);
const total = computed(() => base.value * 2);

function incrementar11941() {
  base.value++;
}
</script>
