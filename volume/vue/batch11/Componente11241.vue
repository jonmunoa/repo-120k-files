<template>
  <section class="panel-11241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11241");
const base = ref(11241);
const total = computed(() => base.value * 2);

function incrementar11241() {
  base.value++;
}
</script>
