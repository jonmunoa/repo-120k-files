// fichero 41202 -- macros y constantes -- MODIFICADO
#define LIMITE_41202 41402
#define FACTOR_41202 4

int aplicar_limite41202(int valor) {
    if (valor > LIMITE_41202) return LIMITE_41202;
    return valor * FACTOR_41202;
}
