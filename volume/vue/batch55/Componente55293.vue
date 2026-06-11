<template>
  <section class="panel-55293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55293");
const base = ref(55293);
const total = computed(() => base.value * 2);

function incrementar55293() {
  base.value++;
}
</script>
