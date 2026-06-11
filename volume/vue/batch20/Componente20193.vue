<template>
  <section class="panel-20193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20193");
const base = ref(20193);
const total = computed(() => base.value * 2);

function incrementar20193() {
  base.value++;
}
</script>
