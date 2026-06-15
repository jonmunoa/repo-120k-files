// fichero 14842 -- macros y constantes -- MODIFICADO
#define LIMITE_14842 15042
#define FACTOR_14842 4

int aplicar_limite14842(int valor) {
    if (valor > LIMITE_14842) return LIMITE_14842;
    return valor * FACTOR_14842;
}
