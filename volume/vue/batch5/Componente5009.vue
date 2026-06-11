<template>
  <section class="panel-5009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5009");
const base = ref(5009);
const total = computed(() => base.value * 2);

function incrementar5009() {
  base.value++;
}
</script>
