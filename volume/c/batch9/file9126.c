// fichero 9126 -- macros y constantes -- MODIFICADO
#define LIMITE_9126 9326
#define FACTOR_9126 3

int aplicar_limite9126(int valor) {
    if (valor > LIMITE_9126) return LIMITE_9126;
    return valor * FACTOR_9126;
}
