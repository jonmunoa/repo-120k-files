// fichero 31418 -- macros y constantes -- MODIFICADO
#define LIMITE_31418 31618
#define FACTOR_31418 5

int aplicar_limite31418(int valor) {
    if (valor > LIMITE_31418) return LIMITE_31418;
    return valor * FACTOR_31418;
}
