// fichero 41022 -- macros y constantes -- MODIFICADO
#define LIMITE_41022 41222
#define FACTOR_41022 4

int aplicar_limite41022(int valor) {
    if (valor > LIMITE_41022) return LIMITE_41022;
    return valor * FACTOR_41022;
}
