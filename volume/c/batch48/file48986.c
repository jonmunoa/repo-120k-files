// fichero 48986 -- macros y constantes
#define LIMITE_48986 49086
#define FACTOR_48986 2

int aplicar_limite48986(int valor) {
    if (valor > LIMITE_48986) return LIMITE_48986;
    return valor * FACTOR_48986;
}
