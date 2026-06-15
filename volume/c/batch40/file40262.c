// fichero 40262 -- macros y constantes -- MODIFICADO
#define LIMITE_40262 40462
#define FACTOR_40262 4

int aplicar_limite40262(int valor) {
    if (valor > LIMITE_40262) return LIMITE_40262;
    return valor * FACTOR_40262;
}
