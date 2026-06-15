// fichero 42410 -- macros y constantes -- MODIFICADO
#define LIMITE_42410 42610
#define FACTOR_42410 2

int aplicar_limite42410(int valor) {
    if (valor > LIMITE_42410) return LIMITE_42410;
    return valor * FACTOR_42410;
}
