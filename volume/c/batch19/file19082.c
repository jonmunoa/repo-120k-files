// fichero 19082 -- macros y constantes -- MODIFICADO
#define LIMITE_19082 19282
#define FACTOR_19082 4

int aplicar_limite19082(int valor) {
    if (valor > LIMITE_19082) return LIMITE_19082;
    return valor * FACTOR_19082;
}
