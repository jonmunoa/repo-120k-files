// fichero 29350 -- macros y constantes
#define LIMITE_29350 29450
#define FACTOR_29350 1

int aplicar_limite29350(int valor) {
    if (valor > LIMITE_29350) return LIMITE_29350;
    return valor * FACTOR_29350;
}
