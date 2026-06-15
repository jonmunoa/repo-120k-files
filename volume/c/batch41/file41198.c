// fichero 41198 -- macros y constantes -- MODIFICADO
#define LIMITE_41198 41398
#define FACTOR_41198 5

int aplicar_limite41198(int valor) {
    if (valor > LIMITE_41198) return LIMITE_41198;
    return valor * FACTOR_41198;
}
