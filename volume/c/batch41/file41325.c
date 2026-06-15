// fichero 41325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41325;

Registro41325 crear_registro41325(int id) {
    Registro41325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
