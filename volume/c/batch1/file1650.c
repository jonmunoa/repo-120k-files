// fichero 1650 -- macros y constantes -- MODIFICADO
#define LIMITE_1650 1850
#define FACTOR_1650 2

int aplicar_limite1650(int valor) {
    if (valor > LIMITE_1650) return LIMITE_1650;
    return valor * FACTOR_1650;
}
