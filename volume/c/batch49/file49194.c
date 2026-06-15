// fichero 49194 -- macros y constantes -- MODIFICADO
#define LIMITE_49194 49394
#define FACTOR_49194 6

int aplicar_limite49194(int valor) {
    if (valor > LIMITE_49194) return LIMITE_49194;
    return valor * FACTOR_49194;
}
