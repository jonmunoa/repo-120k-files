// fichero 3497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3497;

Registro3497 crear_registro3497(int id) {
    Registro3497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
