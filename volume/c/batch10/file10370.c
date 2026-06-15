// fichero 10370 -- macros y constantes -- MODIFICADO
#define LIMITE_10370 10570
#define FACTOR_10370 2

int aplicar_limite10370(int valor) {
    if (valor > LIMITE_10370) return LIMITE_10370;
    return valor * FACTOR_10370;
}
