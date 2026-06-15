// fichero 49838 -- macros y constantes -- MODIFICADO
#define LIMITE_49838 50038
#define FACTOR_49838 5

int aplicar_limite49838(int valor) {
    if (valor > LIMITE_49838) return LIMITE_49838;
    return valor * FACTOR_49838;
}
