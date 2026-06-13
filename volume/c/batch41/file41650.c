// fichero 41650 -- macros y constantes
#define LIMITE_41650 41750
#define FACTOR_41650 1

int aplicar_limite41650(int valor) {
    if (valor > LIMITE_41650) return LIMITE_41650;
    return valor * FACTOR_41650;
}
