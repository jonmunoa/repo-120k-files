// fichero 48725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48725;

Registro48725 crear_registro48725(int id) {
    Registro48725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
