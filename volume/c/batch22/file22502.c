// fichero 22502 -- macros y constantes -- MODIFICADO
#define LIMITE_22502 22702
#define FACTOR_22502 4

int aplicar_limite22502(int valor) {
    if (valor > LIMITE_22502) return LIMITE_22502;
    return valor * FACTOR_22502;
}
