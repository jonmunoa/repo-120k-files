// fichero 3098 -- macros y constantes -- MODIFICADO
#define LIMITE_3098 3298
#define FACTOR_3098 5

int aplicar_limite3098(int valor) {
    if (valor > LIMITE_3098) return LIMITE_3098;
    return valor * FACTOR_3098;
}
