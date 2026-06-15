// fichero 48610 -- macros y constantes -- MODIFICADO
#define LIMITE_48610 48810
#define FACTOR_48610 2

int aplicar_limite48610(int valor) {
    if (valor > LIMITE_48610) return LIMITE_48610;
    return valor * FACTOR_48610;
}
