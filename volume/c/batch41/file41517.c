// fichero 41517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41517;

Registro41517 crear_registro41517(int id) {
    Registro41517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
