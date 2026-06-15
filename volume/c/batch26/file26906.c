// fichero 26906 -- macros y constantes -- MODIFICADO
#define LIMITE_26906 27106
#define FACTOR_26906 3

int aplicar_limite26906(int valor) {
    if (valor > LIMITE_26906) return LIMITE_26906;
    return valor * FACTOR_26906;
}
