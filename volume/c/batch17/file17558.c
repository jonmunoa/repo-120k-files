// fichero 17558 -- macros y constantes -- MODIFICADO
#define LIMITE_17558 17758
#define FACTOR_17558 5

int aplicar_limite17558(int valor) {
    if (valor > LIMITE_17558) return LIMITE_17558;
    return valor * FACTOR_17558;
}
