// fichero 17325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17325;

Registro17325 crear_registro17325(int id) {
    Registro17325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
