// fichero 37906 -- macros y constantes -- MODIFICADO
#define LIMITE_37906 38106
#define FACTOR_37906 3

int aplicar_limite37906(int valor) {
    if (valor > LIMITE_37906) return LIMITE_37906;
    return valor * FACTOR_37906;
}
