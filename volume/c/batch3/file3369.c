// fichero 3369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3369;

Registro3369 crear_registro3369(int id) {
    Registro3369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
