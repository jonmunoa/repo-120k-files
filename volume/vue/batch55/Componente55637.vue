<template>
  <section class="panel-55637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55637");
const base = ref(55637);
const total = computed(() => base.value * 2);

function incrementar55637() {
  base.value++;
}
</script>
