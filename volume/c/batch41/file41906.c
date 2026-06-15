// fichero 41906 -- macros y constantes -- MODIFICADO
#define LIMITE_41906 42106
#define FACTOR_41906 3

int aplicar_limite41906(int valor) {
    if (valor > LIMITE_41906) return LIMITE_41906;
    return valor * FACTOR_41906;
}
