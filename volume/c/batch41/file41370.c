// fichero 41370 -- macros y constantes -- MODIFICADO
#define LIMITE_41370 41570
#define FACTOR_41370 2

int aplicar_limite41370(int valor) {
    if (valor > LIMITE_41370) return LIMITE_41370;
    return valor * FACTOR_41370;
}
