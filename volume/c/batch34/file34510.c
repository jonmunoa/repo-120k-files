// fichero 34510 -- macros y constantes
#define LIMITE_34510 34610
#define FACTOR_34510 1

int aplicar_limite34510(int valor) {
    if (valor > LIMITE_34510) return LIMITE_34510;
    return valor * FACTOR_34510;
}
