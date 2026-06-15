// fichero 38 -- macros y constantes -- MODIFICADO
#define LIMITE_38 238
#define FACTOR_38 5

int aplicar_limite38(int valor) {
    if (valor > LIMITE_38) return LIMITE_38;
    return valor * FACTOR_38;
}
