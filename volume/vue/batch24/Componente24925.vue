<template>
  <section class="panel-24925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24925");
const base = ref(24925);
const total = computed(() => base.value * 2);

function incrementar24925() {
  base.value++;
}
</script>
