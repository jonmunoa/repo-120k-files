// fichero 24977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24977;

Registro24977 crear_registro24977(int id) {
    Registro24977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
