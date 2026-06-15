// fichero 37918 -- macros y constantes -- MODIFICADO
#define LIMITE_37918 38118
#define FACTOR_37918 5

int aplicar_limite37918(int valor) {
    if (valor > LIMITE_37918) return LIMITE_37918;
    return valor * FACTOR_37918;
}
