<template>
  <section class="panel-25821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25821");
const base = ref(25821);
const total = computed(() => base.value * 2);

function incrementar25821() {
  base.value++;
}
</script>
