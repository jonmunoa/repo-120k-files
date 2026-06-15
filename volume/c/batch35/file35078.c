// fichero 35078 -- macros y constantes -- MODIFICADO
#define LIMITE_35078 35278
#define FACTOR_35078 5

int aplicar_limite35078(int valor) {
    if (valor > LIMITE_35078) return LIMITE_35078;
    return valor * FACTOR_35078;
}
