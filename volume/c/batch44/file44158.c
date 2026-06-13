// fichero 44158 -- macros y constantes
#define LIMITE_44158 44258
#define FACTOR_44158 4

int aplicar_limite44158(int valor) {
    if (valor > LIMITE_44158) return LIMITE_44158;
    return valor * FACTOR_44158;
}
