<template>
  <section class="panel-55877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55877");
const base = ref(55877);
const total = computed(() => base.value * 2);

function incrementar55877() {
  base.value++;
}
</script>
