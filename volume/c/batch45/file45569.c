// fichero 45569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45569;

Registro45569 crear_registro45569(int id) {
    Registro45569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
