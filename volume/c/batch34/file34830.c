// fichero 34830 -- macros y constantes -- MODIFICADO
#define LIMITE_34830 35030
#define FACTOR_34830 2

int aplicar_limite34830(int valor) {
    if (valor > LIMITE_34830) return LIMITE_34830;
    return valor * FACTOR_34830;
}
