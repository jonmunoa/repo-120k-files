// fichero 48442 -- macros y constantes -- MODIFICADO
#define LIMITE_48442 48642
#define FACTOR_48442 4

int aplicar_limite48442(int valor) {
    if (valor > LIMITE_48442) return LIMITE_48442;
    return valor * FACTOR_48442;
}
