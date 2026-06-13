// fichero 38650 -- macros y constantes
#define LIMITE_38650 38750
#define FACTOR_38650 1

int aplicar_limite38650(int valor) {
    if (valor > LIMITE_38650) return LIMITE_38650;
    return valor * FACTOR_38650;
}
