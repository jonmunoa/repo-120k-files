// fichero 18977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18977;

Registro18977 crear_registro18977(int id) {
    Registro18977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
