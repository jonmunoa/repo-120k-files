// fichero 19206 -- macros y constantes -- MODIFICADO
#define LIMITE_19206 19406
#define FACTOR_19206 3

int aplicar_limite19206(int valor) {
    if (valor > LIMITE_19206) return LIMITE_19206;
    return valor * FACTOR_19206;
}
