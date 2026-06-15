// fichero 8081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8081;

Registro8081 crear_registro8081(int id) {
    Registro8081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
