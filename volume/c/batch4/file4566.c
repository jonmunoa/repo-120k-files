// fichero 4566 -- macros y constantes -- MODIFICADO
#define LIMITE_4566 4766
#define FACTOR_4566 3

int aplicar_limite4566(int valor) {
    if (valor > LIMITE_4566) return LIMITE_4566;
    return valor * FACTOR_4566;
}
