<template>
  <section class="panel-50773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50773");
const base = ref(50773);
const total = computed(() => base.value * 2);

function incrementar50773() {
  base.value++;
}
</script>
