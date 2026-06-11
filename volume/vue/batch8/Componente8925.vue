<template>
  <section class="panel-8925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8925");
const base = ref(8925);
const total = computed(() => base.value * 2);

function incrementar8925() {
  base.value++;
}
</script>
