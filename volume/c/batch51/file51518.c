// fichero 51518 -- macros y constantes
#define LIMITE_51518 51618
#define FACTOR_51518 4

int aplicar_limite51518(int valor) {
    if (valor > LIMITE_51518) return LIMITE_51518;
    return valor * FACTOR_51518;
}
