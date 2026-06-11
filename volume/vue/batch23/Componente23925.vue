<template>
  <section class="panel-23925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23925");
const base = ref(23925);
const total = computed(() => base.value * 2);

function incrementar23925() {
  base.value++;
}
</script>
