<template>
  <section class="panel-51713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51713");
const base = ref(51713);
const total = computed(() => base.value * 2);

function incrementar51713() {
  base.value++;
}
</script>
