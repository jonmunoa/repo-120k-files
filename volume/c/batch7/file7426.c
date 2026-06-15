// fichero 7426 -- macros y constantes -- MODIFICADO
#define LIMITE_7426 7626
#define FACTOR_7426 3

int aplicar_limite7426(int valor) {
    if (valor > LIMITE_7426) return LIMITE_7426;
    return valor * FACTOR_7426;
}
