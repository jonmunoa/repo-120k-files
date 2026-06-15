// fichero 8381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8381;

Registro8381 crear_registro8381(int id) {
    Registro8381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
