// fichero 31418 -- macros y constantes
#define LIMITE_31418 31518
#define FACTOR_31418 4

int aplicar_limite31418(int valor) {
    if (valor > LIMITE_31418) return LIMITE_31418;
    return valor * FACTOR_31418;
}
