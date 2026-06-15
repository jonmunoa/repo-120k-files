// fichero 40930 -- macros y constantes -- MODIFICADO
#define LIMITE_40930 41130
#define FACTOR_40930 2

int aplicar_limite40930(int valor) {
    if (valor > LIMITE_40930) return LIMITE_40930;
    return valor * FACTOR_40930;
}
