<template>
  <section class="panel-26697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26697");
const base = ref(26697);
const total = computed(() => base.value * 2);

function incrementar26697() {
  base.value++;
}
</script>
