// fichero 48018 -- macros y constantes -- MODIFICADO
#define LIMITE_48018 48218
#define FACTOR_48018 5

int aplicar_limite48018(int valor) {
    if (valor > LIMITE_48018) return LIMITE_48018;
    return valor * FACTOR_48018;
}
