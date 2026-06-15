// fichero 46046 -- macros y constantes -- MODIFICADO
#define LIMITE_46046 46246
#define FACTOR_46046 3

int aplicar_limite46046(int valor) {
    if (valor > LIMITE_46046) return LIMITE_46046;
    return valor * FACTOR_46046;
}
