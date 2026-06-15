// fichero 49977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49977;

Registro49977 crear_registro49977(int id) {
    Registro49977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
