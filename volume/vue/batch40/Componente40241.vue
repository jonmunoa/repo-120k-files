<template>
  <section class="panel-40241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40241");
const base = ref(40241);
const total = computed(() => base.value * 2);

function incrementar40241() {
  base.value++;
}
</script>
