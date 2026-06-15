// fichero 27845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27845;

Registro27845 crear_registro27845(int id) {
    Registro27845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
