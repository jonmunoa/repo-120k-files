// fichero 28778 -- macros y constantes -- MODIFICADO
#define LIMITE_28778 28978
#define FACTOR_28778 5

int aplicar_limite28778(int valor) {
    if (valor > LIMITE_28778) return LIMITE_28778;
    return valor * FACTOR_28778;
}
