// fichero 6425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6425;

Registro6425 crear_registro6425(int id) {
    Registro6425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
