// fichero 5650 -- macros y constantes -- MODIFICADO
#define LIMITE_5650 5850
#define FACTOR_5650 2

int aplicar_limite5650(int valor) {
    if (valor > LIMITE_5650) return LIMITE_5650;
    return valor * FACTOR_5650;
}
