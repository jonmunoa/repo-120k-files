<template>
  <section class="panel-25785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25785");
const base = ref(25785);
const total = computed(() => base.value * 2);

function incrementar25785() {
  base.value++;
}
</script>
