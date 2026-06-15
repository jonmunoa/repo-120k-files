// fichero 48526 -- macros y constantes -- MODIFICADO
#define LIMITE_48526 48726
#define FACTOR_48526 3

int aplicar_limite48526(int valor) {
    if (valor > LIMITE_48526) return LIMITE_48526;
    return valor * FACTOR_48526;
}
