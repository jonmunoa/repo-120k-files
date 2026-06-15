// fichero 48242 -- macros y constantes -- MODIFICADO
#define LIMITE_48242 48442
#define FACTOR_48242 4

int aplicar_limite48242(int valor) {
    if (valor > LIMITE_48242) return LIMITE_48242;
    return valor * FACTOR_48242;
}
