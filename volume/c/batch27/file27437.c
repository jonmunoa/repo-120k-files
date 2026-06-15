// fichero 27437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27437;

Registro27437 crear_registro27437(int id) {
    Registro27437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
