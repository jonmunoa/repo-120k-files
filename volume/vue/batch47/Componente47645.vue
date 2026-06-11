<template>
  <section class="panel-47645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47645");
const base = ref(47645);
const total = computed(() => base.value * 2);

function incrementar47645() {
  base.value++;
}
</script>
