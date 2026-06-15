// fichero 41141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41141;

Registro41141 crear_registro41141(int id) {
    Registro41141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
