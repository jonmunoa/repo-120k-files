// fichero 37986 -- macros y constantes
#define LIMITE_37986 38086
#define FACTOR_37986 2

int aplicar_limite37986(int valor) {
    if (valor > LIMITE_37986) return LIMITE_37986;
    return valor * FACTOR_37986;
}
