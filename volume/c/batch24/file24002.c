// fichero 24002 -- macros y constantes -- MODIFICADO
#define LIMITE_24002 24202
#define FACTOR_24002 4

int aplicar_limite24002(int valor) {
    if (valor > LIMITE_24002) return LIMITE_24002;
    return valor * FACTOR_24002;
}
