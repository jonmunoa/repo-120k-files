// fichero 51506 -- macros y constantes
#define LIMITE_51506 51606
#define FACTOR_51506 2

int aplicar_limite51506(int valor) {
    if (valor > LIMITE_51506) return LIMITE_51506;
    return valor * FACTOR_51506;
}
