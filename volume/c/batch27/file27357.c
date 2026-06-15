// fichero 27357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27357;

Registro27357 crear_registro27357(int id) {
    Registro27357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
