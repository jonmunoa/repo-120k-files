// fichero 46370 -- macros y constantes -- MODIFICADO
#define LIMITE_46370 46570
#define FACTOR_46370 2

int aplicar_limite46370(int valor) {
    if (valor > LIMITE_46370) return LIMITE_46370;
    return valor * FACTOR_46370;
}
