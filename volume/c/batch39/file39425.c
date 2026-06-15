// fichero 39425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39425;

Registro39425 crear_registro39425(int id) {
    Registro39425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
