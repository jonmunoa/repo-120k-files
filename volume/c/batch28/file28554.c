// fichero 28554 -- macros y constantes -- MODIFICADO
#define LIMITE_28554 28754
#define FACTOR_28554 6

int aplicar_limite28554(int valor) {
    if (valor > LIMITE_28554) return LIMITE_28554;
    return valor * FACTOR_28554;
}
