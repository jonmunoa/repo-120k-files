<template>
  <section class="panel-35013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35013");
const base = ref(35013);
const total = computed(() => base.value * 2);

function incrementar35013() {
  base.value++;
}
</script>
