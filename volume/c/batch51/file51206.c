// fichero 51206 -- macros y constantes
#define LIMITE_51206 51306
#define FACTOR_51206 2

int aplicar_limite51206(int valor) {
    if (valor > LIMITE_51206) return LIMITE_51206;
    return valor * FACTOR_51206;
}
