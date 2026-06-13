// fichero 48610 -- macros y constantes
#define LIMITE_48610 48710
#define FACTOR_48610 1

int aplicar_limite48610(int valor) {
    if (valor > LIMITE_48610) return LIMITE_48610;
    return valor * FACTOR_48610;
}
