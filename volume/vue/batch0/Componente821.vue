<template>
  <section class="panel-821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 821");
const base = ref(821);
const total = computed(() => base.value * 2);

function incrementar821() {
  base.value++;
}
</script>
