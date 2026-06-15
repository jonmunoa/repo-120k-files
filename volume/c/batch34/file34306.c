// fichero 34306 -- macros y constantes -- MODIFICADO
#define LIMITE_34306 34506
#define FACTOR_34306 3

int aplicar_limite34306(int valor) {
    if (valor > LIMITE_34306) return LIMITE_34306;
    return valor * FACTOR_34306;
}
