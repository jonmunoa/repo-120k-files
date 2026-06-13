// fichero 43138 -- macros y constantes
#define LIMITE_43138 43238
#define FACTOR_43138 4

int aplicar_limite43138(int valor) {
    if (valor > LIMITE_43138) return LIMITE_43138;
    return valor * FACTOR_43138;
}
