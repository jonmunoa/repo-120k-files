// fichero 48734 -- macros y constantes -- MODIFICADO
#define LIMITE_48734 48934
#define FACTOR_48734 6

int aplicar_limite48734(int valor) {
    if (valor > LIMITE_48734) return LIMITE_48734;
    return valor * FACTOR_48734;
}
