// fichero 53098 -- macros y constantes
#define LIMITE_53098 53198
#define FACTOR_53098 4

int aplicar_limite53098(int valor) {
    if (valor > LIMITE_53098) return LIMITE_53098;
    return valor * FACTOR_53098;
}
