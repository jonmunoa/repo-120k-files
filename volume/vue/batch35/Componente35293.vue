<template>
  <section class="panel-35293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35293");
const base = ref(35293);
const total = computed(() => base.value * 2);

function incrementar35293() {
  base.value++;
}
</script>
