// fichero 23453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23453;

Registro23453 crear_registro23453(int id) {
    Registro23453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
