// fichero 29249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29249;

Registro29249 crear_registro29249(int id) {
    Registro29249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
