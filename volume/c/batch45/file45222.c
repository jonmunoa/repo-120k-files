// fichero 45222 -- macros y constantes -- MODIFICADO
#define LIMITE_45222 45422
#define FACTOR_45222 4

int aplicar_limite45222(int valor) {
    if (valor > LIMITE_45222) return LIMITE_45222;
    return valor * FACTOR_45222;
}
