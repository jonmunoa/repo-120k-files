// fichero 16370 -- macros y constantes -- MODIFICADO
#define LIMITE_16370 16570
#define FACTOR_16370 2

int aplicar_limite16370(int valor) {
    if (valor > LIMITE_16370) return LIMITE_16370;
    return valor * FACTOR_16370;
}
