// fichero 15325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15325;

Registro15325 crear_registro15325(int id) {
    Registro15325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
