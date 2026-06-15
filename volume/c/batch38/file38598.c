// fichero 38598 -- macros y constantes -- MODIFICADO
#define LIMITE_38598 38798
#define FACTOR_38598 5

int aplicar_limite38598(int valor) {
    if (valor > LIMITE_38598) return LIMITE_38598;
    return valor * FACTOR_38598;
}
