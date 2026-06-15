// fichero 25882 -- macros y constantes -- MODIFICADO
#define LIMITE_25882 26082
#define FACTOR_25882 4

int aplicar_limite25882(int valor) {
    if (valor > LIMITE_25882) return LIMITE_25882;
    return valor * FACTOR_25882;
}
