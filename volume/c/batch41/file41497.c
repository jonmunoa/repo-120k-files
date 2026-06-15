// fichero 41497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41497;

Registro41497 crear_registro41497(int id) {
    Registro41497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
