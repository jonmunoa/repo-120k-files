<template>
  <section class="panel-26561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26561");
const base = ref(26561);
const total = computed(() => base.value * 2);

function incrementar26561() {
  base.value++;
}
</script>
