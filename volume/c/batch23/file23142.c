// fichero 23142 -- macros y constantes -- MODIFICADO
#define LIMITE_23142 23342
#define FACTOR_23142 4

int aplicar_limite23142(int valor) {
    if (valor > LIMITE_23142) return LIMITE_23142;
    return valor * FACTOR_23142;
}
