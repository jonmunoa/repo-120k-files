// fichero 44977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44977;

Registro44977 crear_registro44977(int id) {
    Registro44977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
