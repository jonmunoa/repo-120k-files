// fichero 3350 -- macros y constantes -- MODIFICADO
#define LIMITE_3350 3550
#define FACTOR_3350 2

int aplicar_limite3350(int valor) {
    if (valor > LIMITE_3350) return LIMITE_3350;
    return valor * FACTOR_3350;
}
