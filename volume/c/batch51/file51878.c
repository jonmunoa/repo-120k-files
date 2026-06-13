// fichero 51878 -- macros y constantes
#define LIMITE_51878 51978
#define FACTOR_51878 4

int aplicar_limite51878(int valor) {
    if (valor > LIMITE_51878) return LIMITE_51878;
    return valor * FACTOR_51878;
}
