// fichero 35566 -- macros y constantes -- MODIFICADO
#define LIMITE_35566 35766
#define FACTOR_35566 3

int aplicar_limite35566(int valor) {
    if (valor > LIMITE_35566) return LIMITE_35566;
    return valor * FACTOR_35566;
}
