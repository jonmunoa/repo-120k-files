// fichero 48214 -- macros y constantes
#define LIMITE_48214 48314
#define FACTOR_48214 5

int aplicar_limite48214(int valor) {
    if (valor > LIMITE_48214) return LIMITE_48214;
    return valor * FACTOR_48214;
}
