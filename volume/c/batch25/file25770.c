// fichero 25770 -- macros y constantes -- MODIFICADO
#define LIMITE_25770 25970
#define FACTOR_25770 2

int aplicar_limite25770(int valor) {
    if (valor > LIMITE_25770) return LIMITE_25770;
    return valor * FACTOR_25770;
}
