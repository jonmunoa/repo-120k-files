// fichero 36177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36177;

Registro36177 crear_registro36177(int id) {
    Registro36177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
