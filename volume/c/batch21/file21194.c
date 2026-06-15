// fichero 21194 -- macros y constantes -- MODIFICADO
#define LIMITE_21194 21394
#define FACTOR_21194 6

int aplicar_limite21194(int valor) {
    if (valor > LIMITE_21194) return LIMITE_21194;
    return valor * FACTOR_21194;
}
