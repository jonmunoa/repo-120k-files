// fichero 10262 -- macros y constantes -- MODIFICADO
#define LIMITE_10262 10462
#define FACTOR_10262 4

int aplicar_limite10262(int valor) {
    if (valor > LIMITE_10262) return LIMITE_10262;
    return valor * FACTOR_10262;
}
