// fichero 19986 -- macros y constantes
#define LIMITE_19986 20086
#define FACTOR_19986 2

int aplicar_limite19986(int valor) {
    if (valor > LIMITE_19986) return LIMITE_19986;
    return valor * FACTOR_19986;
}
