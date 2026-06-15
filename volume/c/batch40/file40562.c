// fichero 40562 -- macros y constantes -- MODIFICADO
#define LIMITE_40562 40762
#define FACTOR_40562 4

int aplicar_limite40562(int valor) {
    if (valor > LIMITE_40562) return LIMITE_40562;
    return valor * FACTOR_40562;
}
