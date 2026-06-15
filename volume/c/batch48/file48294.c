// fichero 48294 -- macros y constantes -- MODIFICADO
#define LIMITE_48294 48494
#define FACTOR_48294 6

int aplicar_limite48294(int valor) {
    if (valor > LIMITE_48294) return LIMITE_48294;
    return valor * FACTOR_48294;
}
