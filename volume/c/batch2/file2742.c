// fichero 2742 -- macros y constantes -- MODIFICADO
#define LIMITE_2742 2942
#define FACTOR_2742 4

int aplicar_limite2742(int valor) {
    if (valor > LIMITE_2742) return LIMITE_2742;
    return valor * FACTOR_2742;
}
