<template>
  <section class="panel-55925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55925");
const base = ref(55925);
const total = computed(() => base.value * 2);

function incrementar55925() {
  base.value++;
}
</script>
