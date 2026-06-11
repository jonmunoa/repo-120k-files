<template>
  <section class="panel-9281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9281");
const base = ref(9281);
const total = computed(() => base.value * 2);

function incrementar9281() {
  base.value++;
}
</script>
