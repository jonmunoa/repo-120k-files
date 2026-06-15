// fichero 37042 -- macros y constantes -- MODIFICADO
#define LIMITE_37042 37242
#define FACTOR_37042 4

int aplicar_limite37042(int valor) {
    if (valor > LIMITE_37042) return LIMITE_37042;
    return valor * FACTOR_37042;
}
