<template>
  <section class="panel-25777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25777");
const base = ref(25777);
const total = computed(() => base.value * 2);

function incrementar25777() {
  base.value++;
}
</script>
