// fichero 19450 -- macros y constantes -- MODIFICADO
#define LIMITE_19450 19650
#define FACTOR_19450 2

int aplicar_limite19450(int valor) {
    if (valor > LIMITE_19450) return LIMITE_19450;
    return valor * FACTOR_19450;
}
