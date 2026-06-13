// fichero 29458 -- macros y constantes
#define LIMITE_29458 29558
#define FACTOR_29458 4

int aplicar_limite29458(int valor) {
    if (valor > LIMITE_29458) return LIMITE_29458;
    return valor * FACTOR_29458;
}
