// fichero 54986 -- macros y constantes
#define LIMITE_54986 55086
#define FACTOR_54986 2

int aplicar_limite54986(int valor) {
    if (valor > LIMITE_54986) return LIMITE_54986;
    return valor * FACTOR_54986;
}
