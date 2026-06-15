// fichero 6877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6877;

Registro6877 crear_registro6877(int id) {
    Registro6877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
