// fichero 8262 -- macros y constantes -- MODIFICADO
#define LIMITE_8262 8462
#define FACTOR_8262 4

int aplicar_limite8262(int valor) {
    if (valor > LIMITE_8262) return LIMITE_8262;
    return valor * FACTOR_8262;
}
