<template>
  <section class="panel-55285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55285");
const base = ref(55285);
const total = computed(() => base.value * 2);

function incrementar55285() {
  base.value++;
}
</script>
