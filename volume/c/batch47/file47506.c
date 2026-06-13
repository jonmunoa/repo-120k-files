// fichero 47506 -- macros y constantes
#define LIMITE_47506 47606
#define FACTOR_47506 2

int aplicar_limite47506(int valor) {
    if (valor > LIMITE_47506) return LIMITE_47506;
    return valor * FACTOR_47506;
}
