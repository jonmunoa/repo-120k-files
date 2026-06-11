<template>
  <section class="panel-30729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30729");
const base = ref(30729);
const total = computed(() => base.value * 2);

function incrementar30729() {
  base.value++;
}
</script>
