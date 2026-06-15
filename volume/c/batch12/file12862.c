// fichero 12862 -- macros y constantes -- MODIFICADO
#define LIMITE_12862 13062
#define FACTOR_12862 4

int aplicar_limite12862(int valor) {
    if (valor > LIMITE_12862) return LIMITE_12862;
    return valor * FACTOR_12862;
}
