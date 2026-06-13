// fichero 35650 -- macros y constantes
#define LIMITE_35650 35750
#define FACTOR_35650 1

int aplicar_limite35650(int valor) {
    if (valor > LIMITE_35650) return LIMITE_35650;
    return valor * FACTOR_35650;
}
