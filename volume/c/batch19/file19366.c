// fichero 19366 -- macros y constantes -- MODIFICADO
#define LIMITE_19366 19566
#define FACTOR_19366 3

int aplicar_limite19366(int valor) {
    if (valor > LIMITE_19366) return LIMITE_19366;
    return valor * FACTOR_19366;
}
