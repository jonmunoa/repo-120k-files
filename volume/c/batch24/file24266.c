// fichero 24266 -- macros y constantes -- MODIFICADO
#define LIMITE_24266 24466
#define FACTOR_24266 3

int aplicar_limite24266(int valor) {
    if (valor > LIMITE_24266) return LIMITE_24266;
    return valor * FACTOR_24266;
}
