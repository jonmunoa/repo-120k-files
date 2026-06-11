<template>
  <section class="panel-38009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38009");
const base = ref(38009);
const total = computed(() => base.value * 2);

function incrementar38009() {
  base.value++;
}
</script>
