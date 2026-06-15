// fichero 19150 -- macros y constantes -- MODIFICADO
#define LIMITE_19150 19350
#define FACTOR_19150 2

int aplicar_limite19150(int valor) {
    if (valor > LIMITE_19150) return LIMITE_19150;
    return valor * FACTOR_19150;
}
