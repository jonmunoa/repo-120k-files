// fichero 23505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23505;

Registro23505 crear_registro23505(int id) {
    Registro23505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
