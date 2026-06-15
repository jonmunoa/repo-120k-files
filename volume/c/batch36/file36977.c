// fichero 36977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36977;

Registro36977 crear_registro36977(int id) {
    Registro36977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
