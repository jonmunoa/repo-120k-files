// fichero 23370 -- macros y constantes -- MODIFICADO
#define LIMITE_23370 23570
#define FACTOR_23370 2

int aplicar_limite23370(int valor) {
    if (valor > LIMITE_23370) return LIMITE_23370;
    return valor * FACTOR_23370;
}
