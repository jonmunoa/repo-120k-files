// fichero 48906 -- macros y constantes -- MODIFICADO
#define LIMITE_48906 49106
#define FACTOR_48906 3

int aplicar_limite48906(int valor) {
    if (valor > LIMITE_48906) return LIMITE_48906;
    return valor * FACTOR_48906;
}
