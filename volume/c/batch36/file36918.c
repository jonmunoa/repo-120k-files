// fichero 36918 -- macros y constantes -- MODIFICADO
#define LIMITE_36918 37118
#define FACTOR_36918 5

int aplicar_limite36918(int valor) {
    if (valor > LIMITE_36918) return LIMITE_36918;
    return valor * FACTOR_36918;
}
