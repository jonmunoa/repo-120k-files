<template>
  <section class="panel-55501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55501");
const base = ref(55501);
const total = computed(() => base.value * 2);

function incrementar55501() {
  base.value++;
}
</script>
