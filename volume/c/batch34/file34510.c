// fichero 34510 -- macros y constantes -- MODIFICADO
#define LIMITE_34510 34710
#define FACTOR_34510 2

int aplicar_limite34510(int valor) {
    if (valor > LIMITE_34510) return LIMITE_34510;
    return valor * FACTOR_34510;
}
