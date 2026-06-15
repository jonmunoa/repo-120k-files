// fichero 25306 -- macros y constantes -- MODIFICADO
#define LIMITE_25306 25506
#define FACTOR_25306 3

int aplicar_limite25306(int valor) {
    if (valor > LIMITE_25306) return LIMITE_25306;
    return valor * FACTOR_25306;
}
