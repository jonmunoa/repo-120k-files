// fichero 31286 -- macros y constantes
#define LIMITE_31286 31386
#define FACTOR_31286 2

int aplicar_limite31286(int valor) {
    if (valor > LIMITE_31286) return LIMITE_31286;
    return valor * FACTOR_31286;
}
