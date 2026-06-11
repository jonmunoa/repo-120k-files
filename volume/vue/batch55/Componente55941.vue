<template>
  <section class="panel-55941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55941");
const base = ref(55941);
const total = computed(() => base.value * 2);

function incrementar55941() {
  base.value++;
}
</script>
