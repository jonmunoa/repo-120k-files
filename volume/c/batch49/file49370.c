// fichero 49370 -- macros y constantes -- MODIFICADO
#define LIMITE_49370 49570
#define FACTOR_49370 2

int aplicar_limite49370(int valor) {
    if (valor > LIMITE_49370) return LIMITE_49370;
    return valor * FACTOR_49370;
}
