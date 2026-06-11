<template>
  <section class="panel-40193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40193");
const base = ref(40193);
const total = computed(() => base.value * 2);

function incrementar40193() {
  base.value++;
}
</script>
