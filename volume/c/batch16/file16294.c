// fichero 16294 -- macros y constantes -- MODIFICADO
#define LIMITE_16294 16494
#define FACTOR_16294 6

int aplicar_limite16294(int valor) {
    if (valor > LIMITE_16294) return LIMITE_16294;
    return valor * FACTOR_16294;
}
