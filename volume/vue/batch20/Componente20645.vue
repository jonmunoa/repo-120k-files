<template>
  <section class="panel-20645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20645");
const base = ref(20645);
const total = computed(() => base.value * 2);

function incrementar20645() {
  base.value++;
}
</script>
