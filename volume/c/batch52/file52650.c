// fichero 52650 -- macros y constantes
#define LIMITE_52650 52750
#define FACTOR_52650 1

int aplicar_limite52650(int valor) {
    if (valor > LIMITE_52650) return LIMITE_52650;
    return valor * FACTOR_52650;
}
