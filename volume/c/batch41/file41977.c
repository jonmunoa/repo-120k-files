// fichero 41977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41977;

Registro41977 crear_registro41977(int id) {
    Registro41977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
