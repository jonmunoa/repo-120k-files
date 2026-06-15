// fichero 44566 -- macros y constantes -- MODIFICADO
#define LIMITE_44566 44766
#define FACTOR_44566 3

int aplicar_limite44566(int valor) {
    if (valor > LIMITE_44566) return LIMITE_44566;
    return valor * FACTOR_44566;
}
