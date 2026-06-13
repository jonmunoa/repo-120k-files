// fichero 29066 -- macros y constantes
#define LIMITE_29066 29166
#define FACTOR_29066 2

int aplicar_limite29066(int valor) {
    if (valor > LIMITE_29066) return LIMITE_29066;
    return valor * FACTOR_29066;
}
