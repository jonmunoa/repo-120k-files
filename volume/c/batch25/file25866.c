// fichero 25866 -- macros y constantes -- MODIFICADO
#define LIMITE_25866 26066
#define FACTOR_25866 3

int aplicar_limite25866(int valor) {
    if (valor > LIMITE_25866) return LIMITE_25866;
    return valor * FACTOR_25866;
}
