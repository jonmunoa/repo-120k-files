<template>
  <section class="panel-33125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33125");
const base = ref(33125);
const total = computed(() => base.value * 2);

function incrementar33125() {
  base.value++;
}
</script>
