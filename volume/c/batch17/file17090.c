// fichero 17090 -- macros y constantes -- MODIFICADO
#define LIMITE_17090 17290
#define FACTOR_17090 2

int aplicar_limite17090(int valor) {
    if (valor > LIMITE_17090) return LIMITE_17090;
    return valor * FACTOR_17090;
}
