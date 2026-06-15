// fichero 27294 -- macros y constantes -- MODIFICADO
#define LIMITE_27294 27494
#define FACTOR_27294 6

int aplicar_limite27294(int valor) {
    if (valor > LIMITE_27294) return LIMITE_27294;
    return valor * FACTOR_27294;
}
