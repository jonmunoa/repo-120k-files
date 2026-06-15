// fichero 24918 -- macros y constantes -- MODIFICADO
#define LIMITE_24918 25118
#define FACTOR_24918 5

int aplicar_limite24918(int valor) {
    if (valor > LIMITE_24918) return LIMITE_24918;
    return valor * FACTOR_24918;
}
