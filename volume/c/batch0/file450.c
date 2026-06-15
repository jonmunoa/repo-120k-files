// fichero 450 -- macros y constantes -- MODIFICADO
#define LIMITE_450 650
#define FACTOR_450 2

int aplicar_limite450(int valor) {
    if (valor > LIMITE_450) return LIMITE_450;
    return valor * FACTOR_450;
}
