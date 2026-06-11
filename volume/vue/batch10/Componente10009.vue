<template>
  <section class="panel-10009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10009");
const base = ref(10009);
const total = computed(() => base.value * 2);

function incrementar10009() {
  base.value++;
}
</script>
