// fichero 19566 -- macros y constantes -- MODIFICADO
#define LIMITE_19566 19766
#define FACTOR_19566 3

int aplicar_limite19566(int valor) {
    if (valor > LIMITE_19566) return LIMITE_19566;
    return valor * FACTOR_19566;
}
