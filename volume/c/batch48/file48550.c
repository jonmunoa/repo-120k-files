// fichero 48550 -- macros y constantes -- MODIFICADO
#define LIMITE_48550 48750
#define FACTOR_48550 2

int aplicar_limite48550(int valor) {
    if (valor > LIMITE_48550) return LIMITE_48550;
    return valor * FACTOR_48550;
}
