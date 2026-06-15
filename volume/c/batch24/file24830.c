// fichero 24830 -- macros y constantes -- MODIFICADO
#define LIMITE_24830 25030
#define FACTOR_24830 2

int aplicar_limite24830(int valor) {
    if (valor > LIMITE_24830) return LIMITE_24830;
    return valor * FACTOR_24830;
}
