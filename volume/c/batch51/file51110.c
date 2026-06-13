// fichero 51110 -- macros y constantes
#define LIMITE_51110 51210
#define FACTOR_51110 1

int aplicar_limite51110(int valor) {
    if (valor > LIMITE_51110) return LIMITE_51110;
    return valor * FACTOR_51110;
}
