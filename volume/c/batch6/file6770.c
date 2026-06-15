// fichero 6770 -- macros y constantes -- MODIFICADO
#define LIMITE_6770 6970
#define FACTOR_6770 2

int aplicar_limite6770(int valor) {
    if (valor > LIMITE_6770) return LIMITE_6770;
    return valor * FACTOR_6770;
}
