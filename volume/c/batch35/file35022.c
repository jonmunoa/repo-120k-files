// fichero 35022 -- macros y constantes -- MODIFICADO
#define LIMITE_35022 35222
#define FACTOR_35022 4

int aplicar_limite35022(int valor) {
    if (valor > LIMITE_35022) return LIMITE_35022;
    return valor * FACTOR_35022;
}
