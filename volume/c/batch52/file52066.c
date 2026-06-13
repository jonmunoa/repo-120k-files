// fichero 52066 -- macros y constantes
#define LIMITE_52066 52166
#define FACTOR_52066 2

int aplicar_limite52066(int valor) {
    if (valor > LIMITE_52066) return LIMITE_52066;
    return valor * FACTOR_52066;
}
