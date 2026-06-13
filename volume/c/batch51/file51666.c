// fichero 51666 -- macros y constantes
#define LIMITE_51666 51766
#define FACTOR_51666 2

int aplicar_limite51666(int valor) {
    if (valor > LIMITE_51666) return LIMITE_51666;
    return valor * FACTOR_51666;
}
