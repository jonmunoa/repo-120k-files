// fichero 23142 -- macros y constantes
#define LIMITE_23142 23242
#define FACTOR_23142 3

int aplicar_limite23142(int valor) {
    if (valor > LIMITE_23142) return LIMITE_23142;
    return valor * FACTOR_23142;
}
