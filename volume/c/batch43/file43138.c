// fichero 43138 -- macros y constantes -- MODIFICADO
#define LIMITE_43138 43338
#define FACTOR_43138 5

int aplicar_limite43138(int valor) {
    if (valor > LIMITE_43138) return LIMITE_43138;
    return valor * FACTOR_43138;
}
