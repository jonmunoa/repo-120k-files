// fichero 35150 -- macros y constantes -- MODIFICADO
#define LIMITE_35150 35350
#define FACTOR_35150 2

int aplicar_limite35150(int valor) {
    if (valor > LIMITE_35150) return LIMITE_35150;
    return valor * FACTOR_35150;
}
