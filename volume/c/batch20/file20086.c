// fichero 20086 -- macros y constantes -- MODIFICADO
#define LIMITE_20086 20286
#define FACTOR_20086 3

int aplicar_limite20086(int valor) {
    if (valor > LIMITE_20086) return LIMITE_20086;
    return valor * FACTOR_20086;
}
