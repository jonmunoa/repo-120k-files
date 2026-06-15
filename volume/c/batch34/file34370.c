// fichero 34370 -- macros y constantes -- MODIFICADO
#define LIMITE_34370 34570
#define FACTOR_34370 2

int aplicar_limite34370(int valor) {
    if (valor > LIMITE_34370) return LIMITE_34370;
    return valor * FACTOR_34370;
}
