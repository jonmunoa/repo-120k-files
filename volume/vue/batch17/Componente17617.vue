<template>
  <section class="panel-17617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17617");
const base = ref(17617);
const total = computed(() => base.value * 2);

function incrementar17617() {
  base.value++;
}
</script>
