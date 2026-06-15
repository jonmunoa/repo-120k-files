// fichero 38226 -- macros y constantes -- MODIFICADO
#define LIMITE_38226 38426
#define FACTOR_38226 3

int aplicar_limite38226(int valor) {
    if (valor > LIMITE_38226) return LIMITE_38226;
    return valor * FACTOR_38226;
}
