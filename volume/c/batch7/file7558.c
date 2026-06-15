// fichero 7558 -- macros y constantes -- MODIFICADO
#define LIMITE_7558 7758
#define FACTOR_7558 5

int aplicar_limite7558(int valor) {
    if (valor > LIMITE_7558) return LIMITE_7558;
    return valor * FACTOR_7558;
}
