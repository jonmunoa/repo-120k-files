// fichero 46042 -- macros y constantes -- MODIFICADO
#define LIMITE_46042 46242
#define FACTOR_46042 4

int aplicar_limite46042(int valor) {
    if (valor > LIMITE_46042) return LIMITE_46042;
    return valor * FACTOR_46042;
}
